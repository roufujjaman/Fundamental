//              I. Lucky Numbers
//              https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    if ((input % 10) % (input / 10) == 0 && input >= 10 && input <= 99)
    {
        printf("YES");
    }
    else if ((input / 10) % (input % 10) == 0 && input >= 10 && input <= 99)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}