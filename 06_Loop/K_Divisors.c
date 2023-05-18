//              K. Divisors
//              https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include<stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        if (count%i == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}