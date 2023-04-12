//          Katryoshka

#include<stdio.h>

int main()
{
    int eye, mouth, body, count=0;
    scanf("%d %d %d", &eye, &mouth, &body);

    do
    {
        /* code */
    } while (eye);
    
    if (eye > 0 && mouth > 0 && body > 0)
    {
        eye--, mouth--, body--;
        count++;
    }
    


    printf("%d", count);
    return 0;
}