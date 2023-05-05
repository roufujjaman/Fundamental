#include <stdio.h>
int main()
{
    int x = 100;        //4 bytes for variable x;
    int* ptr = &x;      //another 4 byte for the pointer variable assigned with address of x (&x)
    printf("%d\n", x == *ptr);
                        //checking value of x equal to dereferencing the pointer of x
                        //returns 1 because it is equal
    printf("%d\n", x);
    *ptr = 111;         //dereferencing the pointer x to change the value of x 
    printf("%d\n", x);
    return 0;
}