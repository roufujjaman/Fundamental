#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < count; i++ )
    {
        cout << arr[i] << " ";
    }
    return 0;
}