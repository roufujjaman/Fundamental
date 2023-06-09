#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> varr(N);
    for ( int i = 0; i < N; i++ ) // O(N)
    {
        cin >> varr[i];
    }
    for ( int i = 0; i < Q; i++) //O(N)
    {
        int L, R;
        cin >> L >> R;
        L--, R--;
        int sum = 0;
        for( int j = L; j <= R; j++ )
        {
            sum += varr[ j ];
        }
        cout << sum << endl;
    }
    return 0;
}