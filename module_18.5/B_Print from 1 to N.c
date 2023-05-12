//https://codeforces.com/group/MWSDmqGsZm/contest/223339
#include <stdio.h>
void printRec(int x)
{
    if (x == 0) return;
    printRec(x - 1);
    printf("%d\n", x);
    return;
}
int main()
{
    int count;
    scanf("%d", &count);
    printRec(count);
    return 0;
}