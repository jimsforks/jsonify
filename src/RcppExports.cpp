// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_from_json
SEXP rcpp_from_json(const char * json, bool& simplifyDataFrame);
RcppExport SEXP _jsonify_rcpp_from_json(SEXP jsonSEXP, SEXP simplifyDataFrameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type json(jsonSEXP);
    Rcpp::traits::input_parameter< bool& >::type simplifyDataFrame(simplifyDataFrameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_from_json(json, simplifyDataFrame));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_col_headers
SEXP rcpp_get_col_headers(Rcpp::List& x);
RcppExport SEXP _jsonify_rcpp_get_col_headers(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_col_headers(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_transpose_list
Rcpp::List rcpp_transpose_list(Rcpp::List& x, Rcpp::CharacterVector& names);
RcppExport SEXP _jsonify_rcpp_transpose_list(SEXP xSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_transpose_list(x, names));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_null_to_na
void rcpp_null_to_na(Rcpp::List& x);
RcppExport SEXP _jsonify_rcpp_null_to_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type x(xSEXP);
    rcpp_null_to_na(x);
    return R_NilValue;
END_RCPP
}
// rcpp_pretty_json
Rcpp::StringVector rcpp_pretty_json(const char* json);
RcppExport SEXP _jsonify_rcpp_pretty_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pretty_json(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_minify_json
Rcpp::StringVector rcpp_minify_json(const char* json);
RcppExport SEXP _jsonify_rcpp_minify_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_minify_json(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pretty_print
void rcpp_pretty_print(const char* json);
RcppExport SEXP _jsonify_rcpp_pretty_print(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_pretty_print(json);
    return R_NilValue;
END_RCPP
}
// rcpp_to_json
Rcpp::StringVector rcpp_to_json(SEXP lst, bool unbox, int digits, bool numeric_dates);
RcppExport SEXP _jsonify_rcpp_to_json(SEXP lstSEXP, SEXP unboxSEXP, SEXP digitsSEXP, SEXP numeric_datesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type numeric_dates(numeric_datesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_to_json(lst, unbox, digits, numeric_dates));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_json
Rcpp::LogicalVector rcpp_validate_json(Rcpp::StringVector json);
RcppExport SEXP _jsonify_rcpp_validate_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_json(json));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jsonify_rcpp_from_json", (DL_FUNC) &_jsonify_rcpp_from_json, 2},
    {"_jsonify_rcpp_get_col_headers", (DL_FUNC) &_jsonify_rcpp_get_col_headers, 1},
    {"_jsonify_rcpp_transpose_list", (DL_FUNC) &_jsonify_rcpp_transpose_list, 2},
    {"_jsonify_rcpp_null_to_na", (DL_FUNC) &_jsonify_rcpp_null_to_na, 1},
    {"_jsonify_rcpp_pretty_json", (DL_FUNC) &_jsonify_rcpp_pretty_json, 1},
    {"_jsonify_rcpp_minify_json", (DL_FUNC) &_jsonify_rcpp_minify_json, 1},
    {"_jsonify_rcpp_pretty_print", (DL_FUNC) &_jsonify_rcpp_pretty_print, 1},
    {"_jsonify_rcpp_to_json", (DL_FUNC) &_jsonify_rcpp_to_json, 4},
    {"_jsonify_rcpp_validate_json", (DL_FUNC) &_jsonify_rcpp_validate_json, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_jsonify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
