//              https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/can-you-do-it-2-2/problem
#include <stdio.h>
int main() {
    int input;
    scanf("%d", &input);
    if (input > 1)
    {
        for (int i = 1; i <= input; i++)
        {
            printf("%d ", i);
        }
    }
    else if (input < 1)
    {
        for (int i = input; i <= 1; i++)
        {
            printf("%d ", i);
        }
        
    }
    else if (input == 1)
    {
        printf("%d", 1);
    }
    return 0;
}
