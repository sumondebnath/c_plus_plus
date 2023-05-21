#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
            // without space input.
    //cin>>str;

            //with space input.
    cin.getline(str, 100);
            //output with space.
    cout<<str<<endl;
            //find length
    cout<<strlen(str)<<endl;

    return 0;
}