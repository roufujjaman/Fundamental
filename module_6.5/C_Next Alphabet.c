//              C. Next Alphabet
//              https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include <stdio.h>
int main() {
    char input;
    scanf("%c", &input);
    if (input >= 'a' && input < 'z')
    {
        printf("%c", ++input);
    } 
    else if (input == 'z')
    {
        printf("a");
    }
    
    return 0;
}