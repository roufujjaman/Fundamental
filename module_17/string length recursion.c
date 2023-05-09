#include <stdio.h>
int strlenRecur(char * arr, int x)
{
    if (arr[x] == '\0') return 0; // Base case
    int len = strlenRecur(arr, x + 1);
    return len + 1;
}
int main()
{
    char name[12] = "ROUFUJJAMAN";
    int mystrlen = strlenRecur(name, 0);
    printf("%d", mystrlen);
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