
//         N. Char [codeforces.com]
#include<stdio.h>

int main()
{   
    char x;
    scanf("%c", &x);
    if(x >= 'A' && x <= 'Z'){
        printf("%c\n", x+32);
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("%c\n", x-32);
    }
    return 0;
}

//         P. First digit !
#include<stdio.h>

int main()
{   
    int x;
    scanf("%d", &x);
    x /= 1000;
    if (x % 2 == 0)
    {   
        printf("EVEN\n");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

//         M. Capital or Small or Digit
#include<stdio.h>

int main()
{   
    char x;
    scanf("%c", &x);
    if(x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if (x >= 'A' && x <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    return 0;
}
//          K. Max and Min
#include<stdio.h>

int main()
{   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //minimum
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}