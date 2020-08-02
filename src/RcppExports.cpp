// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dmulti_dprob
arma::vec dmulti_dprob(const arma::vec x, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_dmulti_dprob(SEXP xSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(dmulti_dprob(x, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// dprobgeno_dprob
arma::vec dprobgeno_dprob(const int& gA, const int& gB, const int K, const arma::vec prob);
RcppExport SEXP _ldsep_dprobgeno_dprob(SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const int& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dprobgeno_dprob(gA, gB, K, prob));
    return rcpp_result_gen;
END_RCPP
}
// dproballgeno_dprob
arma::vec dproballgeno_dprob(const arma::vec& gA, const arma::vec& gB, const int K, const arma::vec prob);
RcppExport SEXP _ldsep_dproballgeno_dprob(SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dproballgeno_dprob(gA, gB, K, prob));
    return rcpp_result_gen;
END_RCPP
}
// dreal_to_simplex_dy
arma::mat dreal_to_simplex_dy(const arma::vec y);
RcppExport SEXP _ldsep_dreal_to_simplex_dy(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(dreal_to_simplex_dy(y));
    return rcpp_result_gen;
END_RCPP
}
// dsimplex_to_real_dx
arma::mat dsimplex_to_real_dx(const arma::vec x);
RcppExport SEXP _ldsep_dsimplex_to_real_dx(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dsimplex_to_real_dx(x));
    return rcpp_result_gen;
END_RCPP
}
// dllike_geno_dpar
arma::vec dllike_geno_dpar(const arma::vec par, const arma::vec& gA, const arma::vec& gB, const int K, const arma::vec alpha);
RcppExport SEXP _ldsep_dllike_geno_dpar(SEXP parSEXP, SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dllike_geno_dpar(par, gA, gB, K, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dD_dprob
arma::vec dD_dprob(const arma::vec prob);
RcppExport SEXP _ldsep_dD_dprob(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dD_dprob(prob));
    return rcpp_result_gen;
END_RCPP
}
// dr2_dprob
arma::vec dr2_dprob(const arma::vec prob);
RcppExport SEXP _ldsep_dr2_dprob(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dr2_dprob(prob));
    return rcpp_result_gen;
END_RCPP
}
// dDprime_dprob
arma::vec dDprime_dprob(const arma::vec prob);
RcppExport SEXP _ldsep_dDprime_dprob(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dDprime_dprob(prob));
    return rcpp_result_gen;
END_RCPP
}
// get_Amat
arma::mat get_Amat(int K);
RcppExport SEXP _ldsep_get_Amat(SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Amat(K));
    return rcpp_result_gen;
END_RCPP
}
// simplex_proj
arma::vec simplex_proj(arma::vec y);
RcppExport SEXP _ldsep_simplex_proj(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(simplex_proj(y));
    return rcpp_result_gen;
END_RCPP
}
// genolike_em
arma::vec genolike_em(arma::vec p, const arma::mat& pgA, const arma::mat& pgB, const arma::vec& alpha, const int maxit, const double tol, bool verbose, bool square);
RcppExport SEXP _ldsep_genolike_em(SEXP pSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP, SEXP maxitSEXP, SEXP tolSEXP, SEXP verboseSEXP, SEXP squareSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type square(squareSEXP);
    rcpp_result_gen = Rcpp::wrap(genolike_em(p, pgA, pgB, alpha, maxit, tol, verbose, square));
    return rcpp_result_gen;
END_RCPP
}
// em_jointgeno
arma::mat em_jointgeno(arma::mat p, const arma::mat& pgA, const arma::mat& pgB, const arma::mat& alpha, const int maxit, const double tol, bool verbose);
RcppExport SEXP _ldsep_em_jointgeno(SEXP pSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP, SEXP maxitSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(em_jointgeno(p, pgA, pgB, alpha, maxit, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// llike_jointgeno
double llike_jointgeno(arma::mat p, const arma::mat& pgA, const arma::mat& pgB, const arma::mat& alpha);
RcppExport SEXP _ldsep_llike_jointgeno(SEXP pSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(llike_jointgeno(p, pgA, pgB, alpha));
    return rcpp_result_gen;
END_RCPP
}
// hessian_jointgeno
arma::mat hessian_jointgeno(arma::mat p, const arma::mat& pgA, const arma::mat& pgB, const arma::mat& alpha);
RcppExport SEXP _ldsep_hessian_jointgeno(SEXP pSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_jointgeno(p, pgA, pgB, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dD_dqlm
arma::vec dD_dqlm(arma::mat p);
RcppExport SEXP _ldsep_dD_dqlm(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(dD_dqlm(p));
    return rcpp_result_gen;
END_RCPP
}
// dr2_dqlm
arma::vec dr2_dqlm(arma::mat p, arma::vec dgrad, double D);
RcppExport SEXP _ldsep_dr2_dqlm(SEXP pSEXP, SEXP dgradSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dgrad(dgradSEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(dr2_dqlm(p, dgrad, D));
    return rcpp_result_gen;
END_RCPP
}
// ddprime_dqlm
arma::vec ddprime_dqlm(arma::mat p, arma::vec dgrad, double D, double Dm);
RcppExport SEXP _ldsep_ddprime_dqlm(SEXP pSEXP, SEXP dgradSEXP, SEXP DSEXP, SEXP DmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dgrad(dgradSEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type Dm(DmSEXP);
    rcpp_result_gen = Rcpp::wrap(ddprime_dqlm(p, dgrad, D, Dm));
    return rcpp_result_gen;
END_RCPP
}
// probgenolike
double probgenolike(const arma::vec& pgA, const arma::vec& pgB, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_probgenolike(SEXP pgASEXP, SEXP pgBSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(probgenolike(pgA, pgB, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// proballgenolike_old
double proballgenolike_old(const arma::mat& pgA, const arma::mat& pgB, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_proballgenolike_old(SEXP pgASEXP, SEXP pgBSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(proballgenolike_old(pgA, pgB, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// proballgenolike
double proballgenolike(const arma::mat& pgA, const arma::mat& pgB, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_proballgenolike(SEXP pgASEXP, SEXP pgBSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(proballgenolike(pgA, pgB, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// llike_genolike
double llike_genolike(const arma::vec par, const arma::mat& pgA, const arma::mat& pgB, const arma::vec alpha);
RcppExport SEXP _ldsep_llike_genolike(SEXP parSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(llike_genolike(par, pgA, pgB, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_dprobgeno_dprob_array
arma::cube get_dprobgeno_dprob_array(int K, arma::vec prob);
RcppExport SEXP _ldsep_get_dprobgeno_dprob_array(SEXP KSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(get_dprobgeno_dprob_array(K, prob));
    return rcpp_result_gen;
END_RCPP
}
// get_prob_array
arma::mat get_prob_array(int K, arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_get_prob_array(SEXP KSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(get_prob_array(K, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// dprobgenolike_dprob
arma::vec dprobgenolike_dprob(const arma::vec& pgA, const arma::vec& pgB, const arma::vec prob);
RcppExport SEXP _ldsep_dprobgenolike_dprob(SEXP pgASEXP, SEXP pgBSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dprobgenolike_dprob(pgA, pgB, prob));
    return rcpp_result_gen;
END_RCPP
}
// dproballgenolike_dprob
arma::vec dproballgenolike_dprob(const arma::mat& pgA, const arma::mat& pgB, const arma::vec prob);
RcppExport SEXP _ldsep_dproballgenolike_dprob(SEXP pgASEXP, SEXP pgBSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(dproballgenolike_dprob(pgA, pgB, prob));
    return rcpp_result_gen;
END_RCPP
}
// dllike_genolike_dpar
arma::vec dllike_genolike_dpar(const arma::vec par, const arma::mat& pgA, const arma::mat& pgB, const arma::vec alpha);
RcppExport SEXP _ldsep_dllike_genolike_dpar(SEXP parSEXP, SEXP pgASEXP, SEXP pgBSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dllike_genolike_dpar(par, pgA, pgB, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dmulti_double
double dmulti_double(const arma::vec x, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_dmulti_double(SEXP xSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(dmulti_double(x, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// probgeno
double probgeno(const int& gA, const int& gB, const int K, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_probgeno(SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const int& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(probgeno(gA, gB, K, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// proballgeno
double proballgeno(const arma::vec& gA, const arma::vec& gB, const int K, const arma::vec prob, bool log_p);
RcppExport SEXP _ldsep_proballgeno(SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP probSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(proballgeno(gA, gB, K, prob, log_p));
    return rcpp_result_gen;
END_RCPP
}
// llike_geno
double llike_geno(const arma::vec par, const arma::vec& gA, const arma::vec& gB, const int K, const arma::vec alpha);
RcppExport SEXP _ldsep_llike_geno(SEXP parSEXP, SEXP gASEXP, SEXP gBSEXP, SEXP KSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gA(gASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gB(gBSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(llike_geno(par, gA, gB, K, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm
double dmvnorm(arma::vec x, arma::vec mu, arma::mat sigma, bool log);
RcppExport SEXP _ldsep_dmvnorm(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm(x, mu, sigma, log));
    return rcpp_result_gen;
END_RCPP
}
// pbnorm_dist
arma::mat pbnorm_dist(arma::vec mu, arma::mat sigma, int K, bool log);
RcppExport SEXP _ldsep_pbnorm_dist(SEXP muSEXP, SEXP sigmaSEXP, SEXP KSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(pbnorm_dist(mu, sigma, K, log));
    return rcpp_result_gen;
END_RCPP
}
// llike_pbnorm_genolike
double llike_pbnorm_genolike(const arma::mat& pgA, const arma::mat& pgB, const arma::vec& mu, const arma::mat& sigma);
RcppExport SEXP _ldsep_llike_pbnorm_genolike(SEXP pgASEXP, SEXP pgBSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(llike_pbnorm_genolike(pgA, pgB, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// prior_mu
double prior_mu(arma::vec mu, int K);
RcppExport SEXP _ldsep_prior_mu(SEXP muSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(prior_mu(mu, K));
    return rcpp_result_gen;
END_RCPP
}
// prior_sigma
double prior_sigma(arma::vec lvec);
RcppExport SEXP _ldsep_prior_sigma(SEXP lvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type lvec(lvecSEXP);
    rcpp_result_gen = Rcpp::wrap(prior_sigma(lvec));
    return rcpp_result_gen;
END_RCPP
}
// obj_pbnorm_genolike
double obj_pbnorm_genolike(const arma::vec& par, const arma::mat& pgA, const arma::mat& pgB);
RcppExport SEXP _ldsep_obj_pbnorm_genolike(SEXP parSEXP, SEXP pgASEXP, SEXP pgBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgA(pgASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pgB(pgBSEXP);
    rcpp_result_gen = Rcpp::wrap(obj_pbnorm_genolike(par, pgA, pgB));
    return rcpp_result_gen;
END_RCPP
}
// lprior
double lprior(const arma::vec prob, const arma::vec alpha);
RcppExport SEXP _ldsep_lprior(SEXP probSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(lprior(prob, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dlprior_dprob
arma::vec dlprior_dprob(const arma::vec prob, const arma::vec alpha);
RcppExport SEXP _ldsep_dlprior_dprob(SEXP probSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dlprior_dprob(prob, alpha));
    return rcpp_result_gen;
END_RCPP
}
// lprior_par
double lprior_par(const arma::vec par, const arma::vec alpha);
RcppExport SEXP _ldsep_lprior_par(SEXP parSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(lprior_par(par, alpha));
    return rcpp_result_gen;
END_RCPP
}
// dlprior_par_dprob
arma::vec dlprior_par_dprob(const arma::vec par, const arma::vec alpha);
RcppExport SEXP _ldsep_dlprior_par_dprob(SEXP parSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dlprior_par_dprob(par, alpha));
    return rcpp_result_gen;
END_RCPP
}
// log_sum_exp
double log_sum_exp(const arma::vec& x);
RcppExport SEXP _ldsep_log_sum_exp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log_sum_exp(x));
    return rcpp_result_gen;
END_RCPP
}
// log_sum_exp_mat
double log_sum_exp_mat(const arma::mat& x);
RcppExport SEXP _ldsep_log_sum_exp_mat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log_sum_exp_mat(x));
    return rcpp_result_gen;
END_RCPP
}
// log_sum_exp_2
double log_sum_exp_2(double x, double y);
RcppExport SEXP _ldsep_log_sum_exp_2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(log_sum_exp_2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// plog_sum_exp
arma::vec plog_sum_exp(const arma::vec& x, const arma::vec& y);
RcppExport SEXP _ldsep_plog_sum_exp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(plog_sum_exp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// plog_sum_exp_mat
arma::mat plog_sum_exp_mat(const arma::mat& x, const arma::mat& y);
RcppExport SEXP _ldsep_plog_sum_exp_mat(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(plog_sum_exp_mat(x, y));
    return rcpp_result_gen;
END_RCPP
}
// logit
double logit(double x);
RcppExport SEXP _ldsep_logit(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logit(x));
    return rcpp_result_gen;
END_RCPP
}
// expit
double expit(double x);
RcppExport SEXP _ldsep_expit(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(expit(x));
    return rcpp_result_gen;
END_RCPP
}
// real_to_simplex
arma::vec real_to_simplex(const arma::vec y);
RcppExport SEXP _ldsep_real_to_simplex(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(real_to_simplex(y));
    return rcpp_result_gen;
END_RCPP
}
// simplex_to_real
arma::vec simplex_to_real(const arma::vec x);
RcppExport SEXP _ldsep_simplex_to_real(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(simplex_to_real(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ldsep_dmulti_dprob", (DL_FUNC) &_ldsep_dmulti_dprob, 3},
    {"_ldsep_dprobgeno_dprob", (DL_FUNC) &_ldsep_dprobgeno_dprob, 4},
    {"_ldsep_dproballgeno_dprob", (DL_FUNC) &_ldsep_dproballgeno_dprob, 4},
    {"_ldsep_dreal_to_simplex_dy", (DL_FUNC) &_ldsep_dreal_to_simplex_dy, 1},
    {"_ldsep_dsimplex_to_real_dx", (DL_FUNC) &_ldsep_dsimplex_to_real_dx, 1},
    {"_ldsep_dllike_geno_dpar", (DL_FUNC) &_ldsep_dllike_geno_dpar, 5},
    {"_ldsep_dD_dprob", (DL_FUNC) &_ldsep_dD_dprob, 1},
    {"_ldsep_dr2_dprob", (DL_FUNC) &_ldsep_dr2_dprob, 1},
    {"_ldsep_dDprime_dprob", (DL_FUNC) &_ldsep_dDprime_dprob, 1},
    {"_ldsep_get_Amat", (DL_FUNC) &_ldsep_get_Amat, 1},
    {"_ldsep_simplex_proj", (DL_FUNC) &_ldsep_simplex_proj, 1},
    {"_ldsep_genolike_em", (DL_FUNC) &_ldsep_genolike_em, 8},
    {"_ldsep_em_jointgeno", (DL_FUNC) &_ldsep_em_jointgeno, 7},
    {"_ldsep_llike_jointgeno", (DL_FUNC) &_ldsep_llike_jointgeno, 4},
    {"_ldsep_hessian_jointgeno", (DL_FUNC) &_ldsep_hessian_jointgeno, 4},
    {"_ldsep_dD_dqlm", (DL_FUNC) &_ldsep_dD_dqlm, 1},
    {"_ldsep_dr2_dqlm", (DL_FUNC) &_ldsep_dr2_dqlm, 3},
    {"_ldsep_ddprime_dqlm", (DL_FUNC) &_ldsep_ddprime_dqlm, 4},
    {"_ldsep_probgenolike", (DL_FUNC) &_ldsep_probgenolike, 4},
    {"_ldsep_proballgenolike_old", (DL_FUNC) &_ldsep_proballgenolike_old, 4},
    {"_ldsep_proballgenolike", (DL_FUNC) &_ldsep_proballgenolike, 4},
    {"_ldsep_llike_genolike", (DL_FUNC) &_ldsep_llike_genolike, 4},
    {"_ldsep_get_dprobgeno_dprob_array", (DL_FUNC) &_ldsep_get_dprobgeno_dprob_array, 2},
    {"_ldsep_get_prob_array", (DL_FUNC) &_ldsep_get_prob_array, 3},
    {"_ldsep_dprobgenolike_dprob", (DL_FUNC) &_ldsep_dprobgenolike_dprob, 3},
    {"_ldsep_dproballgenolike_dprob", (DL_FUNC) &_ldsep_dproballgenolike_dprob, 3},
    {"_ldsep_dllike_genolike_dpar", (DL_FUNC) &_ldsep_dllike_genolike_dpar, 4},
    {"_ldsep_dmulti_double", (DL_FUNC) &_ldsep_dmulti_double, 3},
    {"_ldsep_probgeno", (DL_FUNC) &_ldsep_probgeno, 5},
    {"_ldsep_proballgeno", (DL_FUNC) &_ldsep_proballgeno, 5},
    {"_ldsep_llike_geno", (DL_FUNC) &_ldsep_llike_geno, 5},
    {"_ldsep_dmvnorm", (DL_FUNC) &_ldsep_dmvnorm, 4},
    {"_ldsep_pbnorm_dist", (DL_FUNC) &_ldsep_pbnorm_dist, 4},
    {"_ldsep_llike_pbnorm_genolike", (DL_FUNC) &_ldsep_llike_pbnorm_genolike, 4},
    {"_ldsep_prior_mu", (DL_FUNC) &_ldsep_prior_mu, 2},
    {"_ldsep_prior_sigma", (DL_FUNC) &_ldsep_prior_sigma, 1},
    {"_ldsep_obj_pbnorm_genolike", (DL_FUNC) &_ldsep_obj_pbnorm_genolike, 3},
    {"_ldsep_lprior", (DL_FUNC) &_ldsep_lprior, 2},
    {"_ldsep_dlprior_dprob", (DL_FUNC) &_ldsep_dlprior_dprob, 2},
    {"_ldsep_lprior_par", (DL_FUNC) &_ldsep_lprior_par, 2},
    {"_ldsep_dlprior_par_dprob", (DL_FUNC) &_ldsep_dlprior_par_dprob, 2},
    {"_ldsep_log_sum_exp", (DL_FUNC) &_ldsep_log_sum_exp, 1},
    {"_ldsep_log_sum_exp_mat", (DL_FUNC) &_ldsep_log_sum_exp_mat, 1},
    {"_ldsep_log_sum_exp_2", (DL_FUNC) &_ldsep_log_sum_exp_2, 2},
    {"_ldsep_plog_sum_exp", (DL_FUNC) &_ldsep_plog_sum_exp, 2},
    {"_ldsep_plog_sum_exp_mat", (DL_FUNC) &_ldsep_plog_sum_exp_mat, 2},
    {"_ldsep_logit", (DL_FUNC) &_ldsep_logit, 1},
    {"_ldsep_expit", (DL_FUNC) &_ldsep_expit, 1},
    {"_ldsep_real_to_simplex", (DL_FUNC) &_ldsep_real_to_simplex, 1},
    {"_ldsep_simplex_to_real", (DL_FUNC) &_ldsep_simplex_to_real, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ldsep(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
