#include <stdio.h>

int main()
{
    int arr[5] = {100, 200, 300, 400, 500};
    printf("arr[0] address\t- %p\n", &arr[0]);
    printf("arr[0] address\t- %p\n", arr);


    printf("arr[0] value\t- %d\n", arr[0]);
    printf("arr[0] value\t- %d\n", *arr);

    printf("arr[1] value\t- %d\n", arr[1]);
    printf("arr[1] value\t- %d\n", *(arr+1)); //arr[1] -> *(arr+1)
    printf("arr[1] value\t- %d\n", 1[arr]); //arr[1] -> *(arr+1)

    return 0;
}

// arr[0] address  - 0061FF0C
// arr[0] address  - 0061FF0C
// arr[0] value    - 100
// arr[0] value    - 100
// arr[1] value    - 200
// arr[1] value    - 200
// arr[1] value    - 200