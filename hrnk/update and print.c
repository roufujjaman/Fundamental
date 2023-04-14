//          https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/update-and-print/submissions
#include <stdio.h>
int main() {
    int count, index, val;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &index, &val);
    arr[index] = val;
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
