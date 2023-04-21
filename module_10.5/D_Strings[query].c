#include <stdio.h>
#include <string.h>
int main() {
    char arrOne[11];
    char arrTwo[11];
    scanf("%s", arrOne);
    scanf("%s", arrTwo);
    char arrCombined[22];
    int j = 0;
    int countOne = strlen(arrOne);
    for (int i = 0; i < countOne; i++)
    {
        arrCombined[i] = arrOne[i];
        j++;
    }
    int countTwo = strlen(arrTwo);
    for (int i = 0; i < countTwo; i++)
    {
        arrCombined[j] = arrTwo[i];
        j++;
    }
    //adding null at the end of the array with j variable.
    arrCombined[j] = '\0'; 
    printf("%d %d\n", countOne, countTwo);
    int count = strlen(arrOne) + strlen(arrTwo);
    //prints garbage value if this loop is not run.
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%c", arrCombined[i]);
    // }
    printf("%s", arrCombined);
    printf("\n");
    char temp = arrOne[0];
    arrOne[0] = arrTwo[0];
    arrTwo[0] = temp;
    printf("%s %s", arrOne, arrTwo);
    return 0;
}