#include <stdio.h>
int main()
{
    int numValue;
    scanf("%d", &numValue);
    for (int i = 0; i < numValue; i++)
    {
        for (int j = 0; j < numValue; j++)
        {
            if (i == numValue / 2 && j == numValue / 2)
            {
                printf("X");
            }
            else if (i == j)
            {
                printf("\\");
            }
            else if (i + j == numValue - 1)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
// 11 [odd number]
// \*********/
// *\*******/*
// **\*****/**
// ***\***/***
// ****\*/****
// *****X*****
// ****/*\****
// ***/***\***
// **/*****\**
// */*******\*
// /*********\