#include <stdio.h>
int main() {
    int i, n, val, countEven = 0, countOdd = 0, CountPositive = 0, countNagative = 0;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (val%2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
        if (val > 0)
        {
            CountPositive++;
        }
        else
        {
            countNagative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", countEven, countOdd, CountPositive, countNagative);

    return 0;
}