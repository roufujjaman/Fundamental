#include <stdio.h>
// Takes (original array, reference of the second array, array count)
// sort in ascending order
void arraySort(int arrOne[], int * arrTwo, int count)
{
    // array copy
    for (int i = 0; i < count; i++)
    {
        arrTwo[i] = arrOne[i];
    }
    // selection sort;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arrTwo[i] > arrTwo[j])
            {
                int temp = arrTwo[i];
                arrTwo[i] = arrTwo[j];
                arrTwo[j] = temp;
            }
        }
    }
}
int main()
{
    int count = 3;
    int arr[count];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arrSorted[count];

    //arrSort() function
    arraySort(arr, arrSorted, count);


    //Printing...
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arrSorted[i]);
    }
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}