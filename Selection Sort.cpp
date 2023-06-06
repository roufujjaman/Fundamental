#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int count)
{
    int min_in;
    for( int i = 0; i < count; i++ )
    {
        min_in = i;
        for ( int j = i + 1; j < count; j++ )
        {
            if( arr[j] < arr[min_in] )
            {
                min_in = j;
            }
        }
        if ( min_in != i )
        {
            swap(arr[i], arr[min_in]);
        }
    }
}
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for( int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, count);
    for( int i = 0; i < count; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}