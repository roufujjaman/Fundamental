#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for( int i = 0 ; i < N; i++ )
    {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for( int i = 0; i < Q; i++ )
    {
        int query;
        cin >> query;
        int left = 0;
        int right = N - 1;
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
        if( found ) cout << "found" << endl;
        else cout << "not found" << endl;
    }
    return 0;
}