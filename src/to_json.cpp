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
