#include<stdio.h>
#include "math_utils.h"

int main()
{
    int i;
    printf("a number:");
    scanf("%d",&i);
    int factorial = factorial(i);
    printf("%d/n",factorial);
    return 0;
}
