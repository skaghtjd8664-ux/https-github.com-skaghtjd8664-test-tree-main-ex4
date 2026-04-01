#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int num1 = 18;
    int num2 = 24;
    int gcd_result;

    gcd_result = gcd(num1, num2);

    printf("GCD: %d\n", gcd_result);

    return 0;
}