#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N, Q;
    cin >> N >> Q;
    vector<long long int> arr(N); // Prefix Sum
    for ( int i = 0; i < N; i++ ) // O(N)
    {
        if( i == 0 )
        {
            cin >> arr[i];
        }
        else
        {
            cin >> arr[i];
            arr[i] = arr[i] + arr[ i - 1 ];
        }
    }
    for ( int i = 0; i < Q; i++) //O(N)
    {
        long long L, R;
        cin >> L >> R;
        L--, R--;
        long long sum;
        if( L == 0 )
        {
            cout << arr[R] << endl;
        }
        else
        {
            sum = arr[R] - arr[ L - 1 ];
            cout << sum << endl;
        }
    }
    return 0;
}