#include <stdio.h>
int main()
{
    int num_value;
    scanf("%d", &num_value);
    char arr_alphabet[26] = {0};
    for (int i = 0; i < num_value; i++)
    {
        char current_char;
        scanf("%c", &current_char);
        arr_alphabet[current_char - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (arr_alphabet[i] != 0)
        {
            printf("%c", i + 'a');
            arr_alphabet[i]--;
        }
    }
    return 0;
}