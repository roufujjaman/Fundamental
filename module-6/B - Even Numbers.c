//      B. Even Numbers
//      https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        if (i%2 == 0)   
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count==0)
    {
        printf("%d\n", -1);
    }
    return 0;
}

