#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    switch(num%2) {
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
    }

    return 0;
}