//https://codeforces.com/group/MWSDmqGsZm/contest/223339
#include <stdio.h>
void printRec(int x)
{
    if (x == 0) return;
    printf("I love Recursion\n");
    printRec(x - 1);
    return;
}
int main()
{
    int count;
    scanf("%d", &count);
    printRec(count);
    return 0;
}