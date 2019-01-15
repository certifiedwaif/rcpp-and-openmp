#include <Rcpp.h>
#include "my_c_parallel_func.h"

//' Multiple a Value By 2
//' 
//' Computes the multiplication of 2 by passing the data into a _C_ routine
//' that is parallelized
//' 
//' @param x A `vector` of numeric values to multiple.
//' @param n The number of cores to use.
//' 
//' @examples
//' 
//' # Data
//' x = 1:5
//' 
//' # Number of Cores to use in Parallelization
//' ncores = 2
//' 
//' # Call the routine
//' multiply_by_two(x, n = ncores)
//' @export
// [[Rcpp::export]]
void multiply_by_two(Rcpp::NumericVector x, int n) {
   parallel_function( x.begin(), n , "My father is John Elway");
}
