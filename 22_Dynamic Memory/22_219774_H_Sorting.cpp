#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_value;
    cin>>num_value;
    int * arr = new int[num_value];
    for (int i = 0; i < num_value; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < num_value - 1; i++)
    {
        for (int j = i + 1; j < num_value; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < num_value; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}

// //selection sort
// 3
// 3 1 2
// 1 2 3 