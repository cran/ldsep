## ---- include = FALSE---------------------------------------------------------
eval <- requireNamespace("updog", quietly = TRUE)
if (eval) {
  eval <- packageVersion("updog") >= "2.0.2"
}
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>",
  eval = eval
)

## ----setup, warning=FALSE, results='hide', message=FALSE----------------------
library(ldsep)
library(updog)
library(corrplot)

## -----------------------------------------------------------------------------
ploidy <- 4
data("uit", package = "ldsep")
class(uit)

## -----------------------------------------------------------------------------
vvec <- paste0("logL_", 0:ploidy)
vvec
genoarray <- format_multidog(x = uit, varname = vvec)
dim(genoarray)

## -----------------------------------------------------------------------------
ldout <- mldest(geno = genoarray, K = ploidy, type = "gam")

## -----------------------------------------------------------------------------
plot(x = ldout, element = "D")
plot(x = ldout, element = "Dprime")
plot(x = ldout, element = "r")

## -----------------------------------------------------------------------------
ldmat <- format_lddf(obj = ldout, element = "D")
ldmat[1:4, 1:4]

## -----------------------------------------------------------------------------
pmmat <- format_multidog(x = uit, varname = "postmean")
ld_pm <- mldest(geno = pmmat, K = ploidy, type = "comp")
plot(x = ld_pm, element = "r")

## -----------------------------------------------------------------------------
r_hap <- format_lddf(obj = ldout, element = "r")
r_pm  <- format_lddf(obj = ld_pm, element = "r")
plot(x = r_hap, 
     y = r_pm, 
     xlab = expression(paste(hat(r), " Using Genotype Likelihoods")), 
     ylab = expression(paste(hat(r), " Using Posterior Mean")))
abline(0, 1, lty = 2, col = 2)

## -----------------------------------------------------------------------------
shrunkcor <- ldshrink(obj = ldout)
corrplot(corr    = shrunkcor, 
         type    = "upper", 
         method  = "color", 
         diag    = FALSE, 
         is.corr = TRUE, 
         tl.pos  = "n")

## -----------------------------------------------------------------------------
slout <- sldest(geno = genoarray, K = ploidy, win = 3)
plot(slout, element = "r")

