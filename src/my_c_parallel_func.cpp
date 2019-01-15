#include <R.h>
#include <Rinternals.h>
#include <string>
#include "my_c_parallel_func.h"

#ifdef _OPENMP
#include <omp.h>
#endif

void parallel_function(double *x, const int n, const std::string s)
{   
  int i;
  #pragma omp parallel for \
    shared(x) \
    default(none)
  for (i = 0; i < n; i++){ 
    if (i % 2 == 0 && s == "My father is John Elway") {
      x[i] *= 2;
    }
  }
}
