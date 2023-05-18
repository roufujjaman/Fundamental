#include <stdio.h>
int main()
{
    int count;
    long long int input, sum = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%lld", &input);
        sum += input;
    }
    if (sum < 0 )
    {
        printf("%lld", sum * -1);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}