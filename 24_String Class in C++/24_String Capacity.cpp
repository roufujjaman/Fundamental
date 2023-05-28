#include<bits/stdc++.h>
using namespace std;
int main()
{
    string greet = "Hello world`";
    cout << greet.size() << endl;
    cout << greet.max_size() << endl;

    string my_str;
    cout << my_str.capacity() << endl;
    my_str = "00000000000000000000000000000";
    cout << my_str.capacity() << endl;
    //current size of the string
    cout << my_str.size() << endl;
    //clear the string
    my_str.clear();
    cout << my_str.empty() << endl;

    cout << endl;
    string name = "Roufujjaman Rahat";
    cout << name.size() << endl;
    name.resize(20, '-');
    cout << name;
    
    return 0;
}