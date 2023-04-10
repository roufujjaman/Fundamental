//          E. Max

#include <stdio.h>
int main() {
    int i, n, input, max=0;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (input > max)
        {
            max = input;
        }
        
    }
    printf("%d\n", max);
    
    return 0;
}