#include <stdio.h>

void fun (int* x)    //function takes address as input
{
    printf("address of x in fun()\t- %p\n", x);
    *x = 200;       //changes the value of x which points to x declared in main()
}
int main()
{
    int x = 100;    //4 bytes for variable x
    fun(&x);        //function takes address as input which is address of the x
    printf("address of x\t- %p\n", &x);
    printf("value of x\t- %d\n", x);
                    //returns same addresses 
    return 0;
}