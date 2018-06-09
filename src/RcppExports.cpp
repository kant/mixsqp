// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mixSQP_qp
List mixSQP_qp(const arma::mat& Q, const arma::mat& R, const arma::vec& x0, double convtol, double ptol, double eps, double sptol, int maxiter, int maxqpiter, bool verbose);
RcppExport SEXP _RmixSQP_mixSQP_qp(SEXP QSEXP, SEXP RSEXP, SEXP x0SEXP, SEXP convtolSEXP, SEXP ptolSEXP, SEXP epsSEXP, SEXP sptolSEXP, SEXP maxiterSEXP, SEXP maxqpiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type ptol(ptolSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type sptol(sptolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxqpiter(maxqpiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(mixSQP_qp(Q, R, x0, convtol, ptol, eps, sptol, maxiter, maxqpiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// mixSQP
List mixSQP(const arma::mat& L, const arma::vec& x0, double convtol, double ptol, double eps, double sptol, int maxiter, int maxqpiter, bool verbose);
RcppExport SEXP _RmixSQP_mixSQP(SEXP LSEXP, SEXP x0SEXP, SEXP convtolSEXP, SEXP ptolSEXP, SEXP epsSEXP, SEXP sptolSEXP, SEXP maxiterSEXP, SEXP maxqpiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type ptol(ptolSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type sptol(sptolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxqpiter(maxqpiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(mixSQP(L, x0, convtol, ptol, eps, sptol, maxiter, maxqpiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _RmixSQP_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _RmixSQP_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _RmixSQP_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _RmixSQP_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RmixSQP_mixSQP_qp", (DL_FUNC) &_RmixSQP_mixSQP_qp, 10},
    {"_RmixSQP_mixSQP", (DL_FUNC) &_RmixSQP_mixSQP, 9},
    {"_RmixSQP_rcpparma_hello_world", (DL_FUNC) &_RmixSQP_rcpparma_hello_world, 0},
    {"_RmixSQP_rcpparma_outerproduct", (DL_FUNC) &_RmixSQP_rcpparma_outerproduct, 1},
    {"_RmixSQP_rcpparma_innerproduct", (DL_FUNC) &_RmixSQP_rcpparma_innerproduct, 1},
    {"_RmixSQP_rcpparma_bothproducts", (DL_FUNC) &_RmixSQP_rcpparma_bothproducts, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RmixSQP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}