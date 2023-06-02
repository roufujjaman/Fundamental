#include<bits/stdc++.h>
using namespace std;
void print()
{
    int n;
    char c;
    cin >> n >> c;
    for ( int i = 0; i < n; i++)
    {
        if( i == n - 1 ) cout << c << endl;
        else cout << c << ' ';
    }
}
int main()
{
    int count;
    cin >> count;
    for ( int i = 0; i < count; i++ )
    {
        print();
    }
    return 0;
}
