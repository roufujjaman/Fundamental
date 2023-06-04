#include<bits/stdc++.h>
using namespace std;
int main() {
    int count;
    cin >> count;
    for( int i = 0; i < count; i++ )
    {
        string str_input, f;
        cin >> str_input >> f;
        while ( str_input.find(f) != -1 )
        {
            int index = str_input.find(f);
            str_input.replace(index, f.length(), "$");
        }
        cout << str_input << endl;
    }
    return 0;
}