#include<bits/stdc++.h>
using namespace std;
class Monitor
{
    public:
        char model[15];
        char manufacturer[15];
        int size;

        Monitor(char * mo, char * ma, int s)
        {
            //not recommended
            strcpy(model, mo);
            //not recommended
            strcpy(manufacturer, ma);
            size = s;
        }
};
int main()
{
    Monitor monitor_one("VH221", "DELL", 21);
    cout << monitor_one.model << endl;
    cout << monitor_one.manufacturer << endl;
    cout << monitor_one.size << endl;
    cout<<endl;
    
    //creating and accessing dynamic object;
    Monitor * monitor_two = new Monitor("SM009", "SAMSUNG", 24);
    cout << (*monitor_two).model << endl;
    cout << (*monitor_two).manufacturer << endl;
    cout << (*monitor_two).size << endl;
    cout << endl;

    //creating and accessing dynamic object using arrow;
    Monitor * monitor_three = new Monitor("NN111", "NEOM", 32);
    cout << monitor_three -> model << endl;
    cout << monitor_three -> manufacturer << endl;
    cout << monitor_three -> size << endl;
    cout << endl;

    //deleting dynamic object;
    delete monitor_three;
    // cout << monitor_three -> model << endl;
    // cout << monitor_three -> manufacturer << endl;
    // cout << monitor_three -> size << endl;
    // cout << endl;

    return 0;
}