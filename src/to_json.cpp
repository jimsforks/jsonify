#include "Rcpp.h"
#include "jsonify/to_json/api.hpp"

// [[Rcpp::export]]
Rcpp::StringVector rcpp_to_json( SEXP lst, bool unbox = false, int digits = -1, bool numeric_dates = true ) {
  if ( digits >= 0 ) {
    SEXP lst2 = Rcpp::clone( lst );
    return jsonify::api::to_json( lst2, unbox, digits, numeric_dates );
  }
  return jsonify::api::to_json( lst, unbox, digits, numeric_dates );
}

// TESTING WARNINGS
// #include "jsonify/to_json/dataframe.hpp"
// 
// // [[Rcpp::export]]
// Rcpp::StringVector df_to_json( Rcpp::DataFrame df ) {
//   return jsonify::dataframe::to_json( df, true, -1);
// }
// 
// #include "jsonify/to_json/vectors.hpp"
// 
// // [[Rcpp::export]]
// Rcpp::StringVector vec_to_json( Rcpp::NumericVector v ) {
//   return jsonify::vectors::to_json( v, true, -1);
// }