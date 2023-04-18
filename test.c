#include <stdio.h>
int main() {
    char peragraph[20] = "Roufujjaman Rahat";
    int sz = sizeof(peragraph);
    int count=0;
    while (peragraph[count] != '\0')
    {
        count++;
        if (peragraph[count] == 'R' || peragraph[count] == 'j')
        {
            peragraph[count] = 0;
        }
        
    }

    printf("Char Size: %d\n", count);
    
    printf("Array Size: %d\n", sz);

    printf("%s", peragraph);
    return 0;
}