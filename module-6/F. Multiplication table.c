//      F. Multiplication table
//      https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
#include <stdio.h>
int main() {
    int i, count;
    scanf("%d", &count);
    for (i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", count, i, i*count);
    }

    return 0;
}