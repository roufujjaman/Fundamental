#include <stdio.h>
int main()
{
    int arr[5] = {100, 200, 300, 400, 500};
    printf("Printing Value of arr[2]\n");
    printf("%d\n", arr[2]);
    printf("%d\n", 2[arr]);
    printf("%d\n", *(arr + 2));
    printf("%d\n", 2[arr]);

    printf("\n");

    printf("Printing Address of arr[2]\n");
    printf("%p\n", &arr[2]);
    printf("%p\n", &2[arr]);
    printf("%p\n", arr + 2);

    return 0;
}

// Printing Value of arr[2]
// 300
// 300
// 300
// 300

// Printing Address of arr[2]
// 0061FF14
// 0061FF14
// 0061FF14
