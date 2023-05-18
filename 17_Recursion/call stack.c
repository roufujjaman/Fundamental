#include <stdio.h>
void world()
{
    printf("world() start\n");
    printf("World\n");
    printf("world() end\n");
}
void hello()
{
    printf("Hello() start\n");
    printf("Hello\n");
    world();
    printf("Hello() end\n");
}
int main()
{
    hello();
    printf("\nEND");
    return 0;
}