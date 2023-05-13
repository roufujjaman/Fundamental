#include <stdio.h>
int main() {
    int count, T = 0, P = 0;
    scanf("%d", &count);
    int arr[2];
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &arr[0], &arr[1]);
        if (arr[0] > arr[1]) T++;
        else if (arr[1] > arr[0]) P++;
    }
    if (T > P) printf("Tiger");
    else if (P > T) printf("Pathan");
    else if (P == T) printf("Draw");
    return 0;
}