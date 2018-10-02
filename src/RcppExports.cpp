// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// test
Rcpp::List test(Rcpp::StringVector json);
RcppExport SEXP _jsonify_test(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(test(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_df_to_json
Rcpp::StringVector rcpp_df_to_json(Rcpp::DataFrame df);
RcppExport SEXP _jsonify_rcpp_df_to_json(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_df_to_json(df));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_numeric_to_json
Rcpp::StringVector rcpp_numeric_to_json(Rcpp::NumericVector nv);
RcppExport SEXP _jsonify_rcpp_numeric_to_json(SEXP nvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nv(nvSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_numeric_to_json(nv));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_character_to_json
Rcpp::StringVector rcpp_character_to_json(Rcpp::StringVector sv);
RcppExport SEXP _jsonify_rcpp_character_to_json(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_character_to_json(sv));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_integer_to_json
Rcpp::StringVector rcpp_integer_to_json(Rcpp::IntegerVector iv);
RcppExport SEXP _jsonify_rcpp_integer_to_json(SEXP ivSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type iv(ivSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_integer_to_json(iv));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_logical_to_json
Rcpp::StringVector rcpp_logical_to_json(Rcpp::LogicalVector iv);
RcppExport SEXP _jsonify_rcpp_logical_to_json(SEXP ivSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type iv(ivSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_logical_to_json(iv));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_list_to_json
Rcpp::StringVector rcpp_list_to_json(SEXP lst);
RcppExport SEXP _jsonify_rcpp_list_to_json(SEXP lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type lst(lstSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_list_to_json(lst));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jsonify_test", (DL_FUNC) &_jsonify_test, 1},
    {"_jsonify_rcpp_df_to_json", (DL_FUNC) &_jsonify_rcpp_df_to_json, 1},
    {"_jsonify_rcpp_numeric_to_json", (DL_FUNC) &_jsonify_rcpp_numeric_to_json, 1},
    {"_jsonify_rcpp_character_to_json", (DL_FUNC) &_jsonify_rcpp_character_to_json, 1},
    {"_jsonify_rcpp_integer_to_json", (DL_FUNC) &_jsonify_rcpp_integer_to_json, 1},
    {"_jsonify_rcpp_logical_to_json", (DL_FUNC) &_jsonify_rcpp_logical_to_json, 1},
    {"_jsonify_rcpp_list_to_json", (DL_FUNC) &_jsonify_rcpp_list_to_json, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_jsonify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
