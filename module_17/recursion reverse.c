#include <stdio.h>
void printRecur(int x)
{
    if (x == 6) return; // Base case
    printRecur(x + 1);
    printf("%d\n", x);
}
int main()
{
    printRecur(1);
    return 0;
}
