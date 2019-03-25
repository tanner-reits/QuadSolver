#include "qsResults.h"

int qsResults(double *x1, double *x2) {
    //make sure x1 is within the float range
  if((*x1 < FLT_MIN) || (*x1 > FLT_MAX)){
    printf("x1 out of float range\n");
    return X1_OUTF;
  }
  //make sure x2 is within the float range
  if((*x2 < FLT_MIN) || (*x2 > FLT_MAX)){
    printf("x2 out of float range\n");
    return X2_OUTF;
  }
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

  return OK;
}
