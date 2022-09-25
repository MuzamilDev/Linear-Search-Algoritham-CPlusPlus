#include<iostream>
using namespace std;

int main()
{
    int Numbers[10];
    int FindNumber;
    int i;

    cout<<"Enter 10 Array Elements"<<endl;
    for(i=0; i<=10; i++)
    cin>>Numbers[i];

    cout<<"Enter the Array Element You want to search "<<endl;
    cin>>FindNumber;
    for(int i=0; i<=10; i++)
    {

        if(FindNumber==Numbers[i])
        {
            cout<<"Number " <<Numbers[i]<< " is at Index "<<i<<endl;
            break;
        }

    }

    return 0;
}
