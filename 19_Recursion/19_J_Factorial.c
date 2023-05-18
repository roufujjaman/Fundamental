#include<stdio.h>
long long int factorial(long long int i)
{
    if (i == 0) return 1;
    long long int val = factorial(i - 1);
    return val * i;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int result = factorial(n);
    printf("%lld", result);
}