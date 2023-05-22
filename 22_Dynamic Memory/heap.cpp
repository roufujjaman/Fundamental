#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating a int in heap
    int * a = new int;
    //dereferencing the location of a via stack -> heap -> value
    *a = 5000;
    //dereferencing the location of a
    cout << *a;
    return 0;
}