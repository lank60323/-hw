#include<stdio.h>
#include "math_utils.h"

int main()
{
    int i;
    printf("a number:");
    scanf("%d",&i);
    int factorialnumber = factorial(i);
    printf("%d\n",factorialnumber);
    return 0;
}
