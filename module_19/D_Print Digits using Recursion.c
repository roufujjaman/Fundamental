#include<stdio.h>
void print_number_rec(int num)
{
    if (num == 0) return;
    print_number_rec(num / 10);
    printf("%d ", num % 10);
    return;
}
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int num;
        scanf("%d", &num);
        print_number_rec(num);
        if (num == 0)
        {
            printf("%d", 0);
        }
        printf("\n");
    }
    return 0;
}