#include "qsResults.h"

int qsResults(double *x1, double *x2) {
    
  //make sure x1 is within the double range
  if((*x1 < DBL_MIN) || (*x1 > DBL_MAX)){
    printf("x1 out of double range\n");
    return X1_OUTD;
  }

  //make sure x2 is within the double range
  if((*x2 < DBL_MIN) || (*x2 > DBL_MAX)){
    printf("x1 out of double range\n");
    return X2_OUTD;
  }
    
    printf("Results: x1 = %f, x2 = %f\n", *x1, *x2);

  return OK;
}
