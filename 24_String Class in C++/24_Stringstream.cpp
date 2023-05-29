#include<bits/stdc++.h>
using namespace std;
int main()
{
    string words;
    getline(cin, words);
    // stringstream str_stream(words);
    stringstream str_stream;
    str_stream << words;
    string word;
    int word_count = 0;
    while (str_stream >> word)
    {
        cout << word << endl;
        word_count++;
    }
    cout << word_count << endl;
    return 0;
}