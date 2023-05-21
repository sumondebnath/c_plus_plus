#include<iostream>
using namespace std;

void swap_func(int *a, int *b);

int main()
{
    int a, b;
    cin>>a>>b;

    swap_func(&a, &b);

    cout<<a<<" "<<b<<endl;

    return 0;
}
void swap_func(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}