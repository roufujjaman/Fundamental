#include <stdio.h>
int mystrlen(char arr[]) {
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    
    return count;
}
int main() {
    char lineOne[1000];
    char lineTwo[1000];
    scanf("%s", lineOne);
    scanf("%s", lineTwo);
    int arrSizeOne = mystrlen(lineOne);
    int arrSizeTwo = mystrlen(lineTwo);
    printf("%d ", arrSizeOne);
    printf("%d\n", arrSizeTwo);
    printf("%s ", lineOne);
    printf("%s", lineTwo);
    return 0;
}