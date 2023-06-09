#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> varr;
    cout << varr.size() << endl; // O(1)
    cout << varr.max_size() << endl; //1231231231 - O(1)
    cout << varr.capacity() << endl; // out: 0; - O(1)
    
    varr.push_back(10);
    
    cout << varr.capacity() << endl; // out: 1;
    varr.push_back(20);
    
    cout << varr.capacity() << endl; // out: 2;
    varr.push_back(30);
    
    cout << varr.capacity() << endl; // out: 4; 
    //capacity will double every time exceeds the capacity
    
    varr.push_back(40);
    varr.push_back(50);
    cout << varr.capacity() << endl; // out: 8;

    varr.clear(); // removes all elements from the vector, not from the memory; - O(n)

    varr.empty(); // checks empty or not out: true/false;
    varr.resize(2, 1);
    varr.resize(5, 2); // - O(N+K)

    for( int i = 0; i < varr.size(); i++) // 1 1 2 2 2
    {
        cout << varr[i] << ' ';
    }
    
    return 0;
}