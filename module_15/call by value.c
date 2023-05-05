#include <stdio.h>

void fun (int x)    //4 bytes for variable x;
{
    printf("address of x in fun()\t- %p\n", &x);
}
int main()
{
    int x = 100;    //4 bytes for variable x;
    fun(x);         //another 4 bytes for variable x when function gets called;
    printf("address of x in main()\t- %p\n", &x);
                    //returns two different addresses 
    return 0;
}