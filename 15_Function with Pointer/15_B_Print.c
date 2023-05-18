#include <stdio.h>
void Print() //No Return + No Perams
{
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("%d", i);
        if (i == count)
        {
            break;
        }
        printf(" ");
    }
}
int main()
{
    Print();
    return 0;
}