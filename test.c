#include <stdio.h>
int main()
{
    int num_value;
    scanf("%d", &num_value);
    char arr[num_value + 1];
    // for (int i = 0; i < num_value; i++)
    // {
    //     scanf("%c", &arr[i]);
    // }
    scanf("%s", arr);
    int arr_alphabets[26] = {0};
    for (int i = 0; i < num_value; i++)
    {
        arr_alphabets[arr[i] - 'a']++;
    }
    int i = 0;
    while (i < 26)
    {
        // printf("%d", i);
        if(arr_alphabets[i] != 0)
        {
            printf("%c", i + 'a');
        }
        i++;
    }
    return 0;
}

