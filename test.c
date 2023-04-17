#include <stdio.h>
char[] getline(char cin[], char symbol) {
    int count = 0;
    while (arr[count] != '\0')
    {
        count++;
        if (arr[count] == symbol)
        {
            break;
        }
    }
    char arr[count+1];
    for (int i = 0; i < count; i++)
    {
        arr[i] = cin[i];
    }
    
    return arr;
}

int main() {
    char lineOne[1000];
    char lineTwo[1000];
    scanf("%s", &lineOne);
    char newLineOne[1000] = getline(lineOne, '\\');
    printf("%s", newLineOne);

    return 0;
}