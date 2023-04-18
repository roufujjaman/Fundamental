#include <stdio.h>
#include <string.h>
int main() {
    char textInput[1000001];
    scanf("%s", &textInput);
    int sum = 0;
    for (int i = 0; i < strlen(textInput); i++)
    {
        sum = sum + (textInput[i] - '0');
    }
    printf("%d", sum);
    return 0;
}