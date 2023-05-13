#include <stdio.h>
#include <limits.h>
int main() {
    int count, min = INT_MAX, min_frequency = 0;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == min) min_frequency++;
    }
    if(min_frequency % 2 == 1) printf("Lucky");
    else printf("Unlucky");
}