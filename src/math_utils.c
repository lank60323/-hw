#include "math_utils.h'

int factorial(int n)
{
   int i;
   int result = 1;
   for(i = 0; i < n; i++){
      result *= i;
   }
   return result;
}
