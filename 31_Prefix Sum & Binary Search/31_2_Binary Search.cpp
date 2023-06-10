#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count]; // array needs to be sorted
    for ( int i = 0; i < count; i++ )
    {
        cin >> arr[i];
    }
    int query;
    cin >> query;

    int left = 0;
    int right = count - 1;
    bool found = false;

    while ( left <= right )
    {
        int mid = left + ( right - left ) / 2;

        if( query == arr[mid] )
        {
            found = true;
            break;
        }
        else if ( query > arr[mid] )
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if( found ) cout << "FOUND";
    else cout << "NOT FOUND";
    return 0;
}