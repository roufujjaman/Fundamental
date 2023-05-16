#include <stdio.h>
int main()
{
    int num_value;
    scanf("%d", &num_value);

    for (int i = 0; i < num_value; i++)
    {
        int num_value_two, even = 0, odd = 0;
        long long int operation_number;
        scanf("%d", &num_value_two);
        long long int arr[num_value_two]; 
        for (int j = 0; j < num_value_two; j++)
        {
            scanf("%lld", &arr[i]);
            if (num_value_two % 2 == 1) continue;
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        if (num_value_two % 2 == 1) operation_number = -1;
        else if (odd == even) operation_number = 0;
        else if (odd == 0 || even == 0) operation_number = num_value_two / 2;
        else if (odd > even) operation_number = (odd - even) / 2;
        else if (odd < even) operation_number = (even - odd) / 2;
        printf("%lld\n", operation_number);
    }
    return 0;
}