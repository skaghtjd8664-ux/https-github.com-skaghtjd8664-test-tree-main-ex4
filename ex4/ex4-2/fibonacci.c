#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int n = 20;
    int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++) {
        if (i > 5) {
            printf("%d ", a);
        }
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}