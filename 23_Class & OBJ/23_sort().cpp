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

    //sorting ascending
    sort(arr, arr + count);
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //sorting descending
    sort(arr, arr + count, greater<int>());
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// 5
// 5 4 3 2 1  
// 1 2 3 4 5
// 5 4 3 2 1