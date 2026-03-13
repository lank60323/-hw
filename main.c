#include<stdio.h>
#include "math_utils.h"

int main()
{
    int n;
    printf("a number:");
    scanf("%d",&n);
    int factorial = factorial(n);
    printf("%d/n",factorial);
    return 0;
}
