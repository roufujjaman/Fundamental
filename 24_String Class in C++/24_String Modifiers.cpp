#include<bits/stdc++.h>
using namespace std;
int main()
{
    string my_str_one = "Over";
    string my_str_two = "loading";
    // operator overloading
    my_str_one += my_str_two;
    cout << my_str_one << endl; //Overloading

    my_str_one.append(my_str_two);
    cout << my_str_one << endl; //Overloadingloading

    my_str_one.push_back('G');
    cout << my_str_one << endl;

    my_str_one += 'G';
    cout << my_str_one << endl;

    my_str_one.pop_back();
    my_str_one.erase(my_str_one.size() - 1);
    cout << my_str_one << endl;

    string temp = "Operator";
    my_str_one.replace(0, 0, temp);
    my_str_one.insert(temp.size(), " ");
    cout << my_str_one;
    return 0;
}