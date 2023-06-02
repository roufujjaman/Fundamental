#include<bits/stdc++.h>
using namespace std;
class Alphabet
{
    public:
        char charecter;
        int count;
};
bool cmp(Alphabet a, Alphabet b)
{
    if(a.count > b.count) return true;
    else return false;
}
int main()
{
    Alphabet arrFrq[26];
    for ( int i = 0; i < 26; i++)
    {
        arrFrq[i].charecter = i + 'a';
        arrFrq[i].count = 0;
    }

    int count;
    cin >> count;
    for( int i = 0; i < count; i++ )
    {
        char input;
        cin >> input;
        arrFrq[input - 'a'].count++;
    }
    //selection sort

    // for ( int i = 0; i < 26; i++)
    // {
    //     for ( int j = i + 1; j < 26; j++)
    //     {
    //         if(arrFrq[i].count < arrFrq[j].count)
    //         {
    //             Alphabet temp = arrFrq[i];
    //             arrFrq[i] = arrFrq[j];
    //             arrFrq[j] = temp;
    //         }
    //     }
    // }
    sort(arrFrq, arrFrq+26, cmp);
    for ( int i = 0; i < 26; i++)
    {
        if( arrFrq[i].count > 0 )
        {
            for ( int j = 0; j < arrFrq[i].count; j++)
            {
                cout << arrFrq[i].charecter;
            }
        }
    }
    return 0;
}