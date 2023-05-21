#include<iostream>
using namespace std;
int main()
{
    int num_value;
    cout<<"Insert a number: ";
    cin>>num_value;
    switch(num_value % 2)
    {
        case 0:
            cout<<"EVEN"<<endl;
            break;
        case 1:
            cout<<"ODD"<<endl;
            break;
    }
    return 0;
}