#include <stdio.h>
void printNOne(int x)
{
    if (x == 6) return; // Base case
    printf("%d\n", x);
    return printNOne(x + 1);
}
void printNTwo(int x)
{
    if (x == 0) return; // Base case
    printf("%d\n", x);
    return printNTwo(x - 1);
}
void printNThree(int x)
{
    printf("%d\n", x);
    if (x == 0) return; // Base case
    if (x < 0) printNThree(x + 1);
    if (x > 0) printNThree(x - 1);
}
int main()
{
    printf("Printing 1 to 5\n");
    printNOne(1);
    printf("\n");

    printf("Printing 5 to 1\n");
    printNTwo(5);
    printf("\n");

    int count;
    scanf("%d", &count);
    printf("Printing N to 0\n");
    printNThree(count);
    printf("\n");
    return 0;
}