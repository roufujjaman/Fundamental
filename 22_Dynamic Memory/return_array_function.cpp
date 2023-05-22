#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    //creating an array in heap mem
    int * arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    //returning a pointer heap_mem_arr[0] 
    return arr;
}
int main()
{
    //creating a pointer in stack mem and overwrite heap_mem_arr[0] -> fun()
    int * arr = fun();
    //printing user inputs from fun()
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}