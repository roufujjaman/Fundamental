#include <stdio.h>
#include <string.h>
void fun(int * arr, int count) //dereferencing the array in which it is called
{
    for (int i = 0; i < count; i++)
    {
        *(arr + i) = i;
    }
}
int main()
{
    int arr[5] = {100, 200, 300, 400, 500};
    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr +i));
    }
    printf("}\n");
    
    fun(arr,5);
    
    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr +i));
    }
    printf("}\n");
    return 0;
}