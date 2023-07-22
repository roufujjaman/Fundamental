#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input_str;
    getline(cin, input_str);
    // stringstream str_stream(words);
    stringstream str_stream;
    str_stream << input_str;
    string str;
    int word_count = 0;
    while (str_stream >> str)
    {
        cout << str << endl;
        word_count++;
    }
    cout << word_count << endl;
    return 0;
}