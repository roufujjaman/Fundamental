#include <stdio.h>
#include <limits.h>
int main()
{
    int numValues;
    scanf("%d", &numValues);

    long long int valueLeft, valueRight;
    for (int i = 0; i < numValues; i++)
    {
        scanf("%lld %lld", &valueLeft, &valueRight);
        long long int currentSum;
        if (valueRight > valueLeft)
        {
            currentSum = (valueRight - valueLeft + 1) * (valueLeft + valueRight) / 2;
        }
        else
        {
            currentSum = (valueLeft - valueRight + 1) * (valueLeft + valueRight) / 2;
        }
        printf("%lld\n", currentSum);
    }
    return 0;
}