//Missing Number
#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int arr[4];
    int sum;
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
        printf("%d\n", arr[0] - (arr[1] + arr[2] + arr[3]));
    }
    return 0;
}

//Unit Matrix
#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr2D[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    //checking if unit matrix;
    int flag = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr2D[i][j] == 1) continue;
            }
            if (arr2D[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1) printf("YES");
    else printf("NO");
    return 0;
}

//Matreix Again
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int arr2D[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    //printing last row;
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr2D[row - 1][i]);
    }
    printf("\n");
    //printing last columg;
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr2D[i][col - 1]);
    }
    return 0;
}

//Count it
#include <stdio.h>
int main() {
    char arr[1001];
    fgets(arr, 1001, stdin);
    int count_capital = 0, count_small = 0, count_space = 0;
    int i = 0;
    while(arr[i] != '\0')
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z') count_capital++;
        if (arr[i] >= 'a' && arr[i] <= 'z') count_small++;
        if (arr[i] == ' ') count_space++;
        i++;
    }
    printf("Capital - %d\n", count_capital);
    printf("Small - %d\n", count_small);
    printf("Spaces - %d\n", count_space);
    return 0;
}

// WOW Patterns Again
int main() {
    int count;
    scanf("%d", &count);
    int charecter = 1, space = count - 1;
    for (int i = 0; i < count; i++)
    {
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < charecter; k++)
        {
            if (i % 2 == 0) printf("^");
            else printf("*");

        }
        space--;
        charecter += 2;
        printf("\n");
    }
    return 0;
}

//Who Wins
#include <stdio.h>
int main() {
    int count, T = 0, P = 0;
    scanf("%d", &count);
    int arr[2];
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &arr[0], &arr[1]);
        if (arr[0] > arr[1]) T++;
        else if (arr[1] > arr[0]) P++;
    }
    if (T > P) printf("T Wins");
    else if (P > T) printf("P Wins");
    else if (P == T) printf("Draw");
    return 0;
}

//Middle Man
int main() {
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (count % 2 == 0) printf("%d %d", arr[(count / 2) - 1], arr[((count / 2) + 1) - 1]);
    else printf("%d", arr[((count + 1) / 2) - 1]);
    return 0;
}