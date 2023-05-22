#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * arr = new int[5];
    int * arr_copy = new int[7];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr_copy[i] = arr[i];
    }
    arr_copy[5] = 100;
    arr_copy[6] = 200;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr_copy[i]<<" ";
    }
    cout<<'\n';
    //delete arr[]
    delete[] arr;
    //printing garbage value
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}