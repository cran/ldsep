# test_that("problem data for norm", {
  ## these data result in correlation estimates of 1 --- on boundary.
  # pgA <- as.matrix(read.csv("./pgA.csv"))
  # pgB <- as.matrix(read.csv("./pgB.csv"))
  # K <- ncol(pgA) - 1
  # ldout <- ldest_comp(ga = pgA, gb = pgB, K = K)
  # postA <- exp(pgA)
  # postA <- postA / rowSums(postA)
  # postB <- exp(pgB)
  # postB <- postB / rowSums(postB)
  # ega <- rowSums(sweep(x = postA, MARGIN = 2, STATS = 0:K, FUN = `*`))
  # egb <- rowSums(sweep(x = postB, MARGIN = 2, STATS = 0:K, FUN = `*`))
  # mu_init <- c(mean(ega), mean(egb))
  # sigma_init <- stats::cov(cbind(ega, egb))
  # L <- t(chol(x = sigma_init))
  # par <- c(mu_init, L[lower.tri(L, diag = TRUE)])
  #
  # oout <- stats::optim(par = par,
  #                      fn = obj_pbnorm_genolike,
  #                      method = "L-BFGS-B",
  #                      lower = c(-Inf, -Inf, 0.01, -Inf, 0.01),
  #                      upper = rep(Inf, 5),
  #                      control = list(fnscale = -1),
  #                      hessian = TRUE,
  #                      pgA = pgA,
  #                      pgB = pgB)
# })

test_that("Monoallelic snps don't cause issues", {
  set.seed(1)
  K <- 6
  n <- 10
  ga <- rep(K, n)
  gb <- sample(0:K, size = n, replace = TRUE)

  ldhapout <- ldest_hap(ga = ga, gb = gb, K = K)

  ldcompout <- ldest_comp(ga = ga, gb = gb, K = K)

  expect_true(all(is.na(ldhapout)))
  expect_true(all(is.na(ldcompout)))
})


test_that("NA's don't cause issues", {
  set.seed(1)
  n <- 20
  K <- 4
  ga <- stats::rbinom(n = n, size = K, prob = 0.5)
  gb <- stats::rbinom(n = n, size = K, prob = 0.5)
  gamat <- t(sapply(ga, stats::dnorm, x = 0:K, sd = 1, log = TRUE))
  gbmat <- t(sapply(gb, stats::dnorm, x = 0:K, sd = 1, log = TRUE))

  ga[c(1, 4)] <- NA
  gb[c(2, 4)] <- NA
  gbmat[1, 5] <- NA
  gamat[3, 2] <- NA

  ldhapout <- ldest(ga = ga, gb = gb, K = K, type = "hap")
  ldhapout2 <- ldest(ga = gamat, gb = gbmat, K = K, type = "hap")
  ldcompout <- ldest(ga = ga, gb = gb, K = K, type = "comp")
  ldcompout2 <- ldest(ga = gamat, gb = gbmat, K = K, type = "comp", model = "flex", pen = 2)
  ldcompout3 <- ldest(ga = gamat, gb = gbmat, K = K, type = "comp", model = "norm")


  expect_true(all(!is.na(ldhapout)))
  expect_true(all(!is.na(ldhapout2)))
  expect_true(all(!is.na(ldcompout)))
  expect_true(all(!is.na(ldcompout2)))
  expect_true(all(!is.na(ldcompout3)))

  ## tests order is the same
  ldnull_hap <- nullvec_hap()
  ldnull_comp <- nullvec_comp(K = K, model = "flex")
  ldnull_comp_norm <- nullvec_comp(K = K, model = "norm")
  expect_equal(names(ldnull_hap), names(ldhapout), names(ldhapout2))
  expect_equal(names(ldnull_comp), names(ldcompout), names(ldcompout2))
  expect_equal(names(ldnull_comp_norm), names(ldcompout3))
})


test_that("simplex_to_real doesn't cause memory error", {
  ref <- c(0.236697222222222, 0.194969444444444, 0.311636111111111, 0.256697222222222)
  temp <- simplex_to_real(ref)
  expect_equal(c(real_to_simplex(temp)), ref)
})

test_that("llike_geno and dllike_geno_dpar works", {
  load("./problem_llike_geno.RData")

  prob <- real_to_simplex(y = par)

  stopifnot(length(gA) == length(gB))
  lp <- 0
  for (i in seq_along(gA)) {
    lp <- lp + probgeno(gA = gA[[i]], gB = gB[[i]], K = K, prob = prob, log_p = TRUE)
  }

  expect_equal(lp, proballgeno(gA = gA, gB = gB, K = K, prob = prob, log_p = TRUE))

  lprior(prob = prob, alpha = alpha)

  llike_geno(par = par, gA = gA, gB = gB, K = K, alpha = alpha)
  dllike_geno_dpar(par = par, gA = gA, gB = gB, K = K, alpha = alpha)
})

