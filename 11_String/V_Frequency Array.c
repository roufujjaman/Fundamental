#include <stdio.h>
int main() {
    int count, arrN;
    scanf("%d %d", &count, &arrN);
    int arr[count], arrCountN[arrN + 1];
    for (int i = 1; i <= arrN; i++)
    {
        arrCountN[i] = 0;
    }
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
        arrCountN[arr[i]]++;
    }
    for (int i = 1; i <= arrN; i++)
    {
        printf("%d\n", arrCountN[i]);
    } 
    return 0;
}