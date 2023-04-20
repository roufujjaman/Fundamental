#include <stdio.h>
int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 9; i >= 2; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
