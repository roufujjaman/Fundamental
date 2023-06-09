#include<bits/stdc++.h>
using namespace std;
int main()
{
    //init a vector with 0 ele.
    vector<int> varrOne; // O(1)

    //init a vector with N ele. all garbage value;
    vector<int> varrTwo( 5 ); // O(N)

    //init a vector with N ele. all values are 0;
    vector<int> varrThree( 5, 0 ); // O(N)

    //init a vector with a Copy from another vector;
    vector<int> varrFour( varrThree ); // O(N)

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    //init a vector from a array;
    vector<int> varrFive( arr, arr + n ); // O(N)

    return 0;
}