#include <stdio.h>
#include <limits.h>
int main() {
    int max = INT_MIN, min;
    int posMax, posMin;
    int count, arr[100];
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);     
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }

    printf("%d", max);
    
    return 0;
}