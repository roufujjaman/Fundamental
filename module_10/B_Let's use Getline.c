#include <stdio.h>
int main() {
    char textInput[1000001];
    fgets(textInput, 1000001, stdin);
    for (int i = 0; textInput[i] != '\\'; i++)
    {
        printf("%c", textInput[i]);
    }
    return 0;
}