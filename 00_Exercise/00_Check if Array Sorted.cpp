#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int test_case;
    cin >> test_case;
    for( int i = 0; i < test_case; i++ )
    {
        int count;
        cin >> count;
        int arr[count];
        for( int j = 0; j < count; j++)
        {
            cin >> arr[j];
        }
        bool sorted = is_sorted();
        if( count == 0 || count == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for( int j = 1; j < count; j++)
        {
            if( arr[j - 1] <= arr[j] )
            {
                if ( sorted == false )
                {
                    sorted = true;
                    continue;
                }
            }
            else
            {
                sorted = false;
                break;
            }
        }
        if( sorted ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}