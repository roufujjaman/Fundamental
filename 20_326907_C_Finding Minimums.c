#include <stdio.h>
#include <limits.h>
int main()
{
    int numValue, rangeLength;
    scanf("%d %d", &numValue, &rangeLength);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    int currentMin = INT_MAX;
    int currentIndex = 0;
    while (currentIndex < numValue)       
    {
        for(int i = 0; i < rangeLength; i++)
        {
            if (arr[currentIndex] < currentMin)
            {
                if (currentIndex >= numValue) continue;
                currentMin = arr[currentIndex];
            }
            currentIndex++;
        }   
        printf("%d ", currentMin);
        currentMin = INT_MAX;
    }
    return 0;
}
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int numValues, rangeLength;
//     scanf("%d %d", &numValues, &rangeLength);

//     int arr[numValues];
//     for (int i = 0; i < numValues; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int currentMin = INT_MAX;
//     int nextGroup = rangeLength;
//     for (int i = 0; i < numValues; i++)
//     {
//         if (i >= nextGroup)
//         {
//             printf("%d ", currentMin);
//             nextGroup += rangeLength;
//             currentMin = INT_MAX;
//         }
//         if (arr[i] < currentMin)
//         {
//             currentMin = arr[i];
//         }
//     }
//     printf("%d\n", currentMin);
//     return 0;
// }