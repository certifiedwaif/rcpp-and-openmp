// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// multiply_by_two
void multiply_by_two(Rcpp::NumericVector x, int n);
RcppExport SEXP _RcppOpenMP_multiply_by_two(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    multiply_by_two(x, n);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppOpenMP_multiply_by_two", (DL_FUNC) &_RcppOpenMP_multiply_by_two, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppOpenMP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
