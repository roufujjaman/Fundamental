#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count];
    int arr_prefix_sum[count];
    for( int i = 0; i < count; i++ )
    {
        cin >> arr[i];
    }

    arr_prefix_sum[0] = arr[0];
    for ( int i = 1; i < count; i++ )
    {
        arr_prefix_sum[i] = arr_prefix_sum[i - 1] + arr[i];
    }
    
    cout << "Prefix Sum Array";
    for( int i = 0; i < count; i++ )
    {
        cout << arr_prefix_sum[i] << ' ';
    }
    return 0;
}