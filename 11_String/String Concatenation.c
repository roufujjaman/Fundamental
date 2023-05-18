#include <stdio.h>
#include <string.h>
int main() {
    char one[100], two[100];
    scanf("%s %s", &one, &two);
    int position  = strlen(one);
    int lenOfTwo = strlen(two);
    for (int i = 0; i <= lenOfTwo; i++)
    {
        one[position] = two[i];
        position++; 
    }
    
    printf("%s", one);
    printf("%d", strlen(one));
    return 0;
}