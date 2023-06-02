#include<bits/stdc++.h>
using namespace std;
class Pen
{
    public:
        string name;
        int price;
};
int main()
{
    int count;
    cin >> count;
    Pen arr[count];
    for( int i = 0; i < count; i++ )
    {
        cin >> arr[i].name;
        cin >> arr[i].price;
    }
    
    //selection sort on price bigger > smaller
    for( int i = 0; i < count - 1; i++ )
    {
        for( int j = i + 1; j < count; j++)
        {
            if( arr[i].price < arr[j].price )
            {
                Pen temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for( int i = 0; i < count; i++ )
    {
        cout << arr[i].name << ' ';
        cout << arr[i].price << endl;
    }
    return 0;
}