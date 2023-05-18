#include <stdio.h>
int strlenRecur(char * arr, int x)
{
    if (arr[x] == '\0') return 0; // Base case
    int val = strlenRecur(arr, x + 1);
    return val + 1;
}
int main()
{
    char name[10] = "UZYMYMW";
    int len = strlenRecur(name, 0);
    printf("%d", len);
    return 0;
}
// #include <stdio.h>
// int strlenRecur(char * arr, int x)
// {
//     if (arr[x] == '\0') return x;
//     return strlenRecur(arr, x + 1);
// }
// int main()
// {
//     char name[12] = "ROUFUJJAMAN";
//     int mystrlen = strlenRecur(name, 1);
//     printf("%d", mystrlen);
//     return 0;
// }