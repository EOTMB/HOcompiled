#include <stdlib.h>
#include "c-sum.h"

void sum_abs_(int *data, int *n,int *asum) {
   int i;

   for (i=0,*asum=0; i < n; ++i) {
       asum += abs(data[i]);
   }
}
 
