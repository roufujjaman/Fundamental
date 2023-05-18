//          A. Timon and Pumbaa
//          https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a - b;
    if (res > 0)
    {
        printf("%d", res);
    }
    else
    {
        printf("%d", 0);
    }
    
    return 0;
}