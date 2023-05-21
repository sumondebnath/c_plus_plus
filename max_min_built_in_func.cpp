#include<iostream>
#include<algorithm>
using namespace std;

int find_min(int x, int y);
int find_max(int x, int y);

int main()
{
    int a, b;
    cin>>a>>b;
            //call min func & print min
    int mn = find_min(a,b);
    cout<<mn<<endl;
            //call max func & print max
    int mx = find_max(a, b);
    cout<<mx<<endl;

        // now we are going to Built_in_function.
    int m,n;
    cin>>m>>n;
                //built in function min max.
    int m_min = min(m,n);
    int m_max = max(m,n);
            //print min max.
    cout<<m_min<<" "<<m_max<<endl;

    return 0;
}
int find_min(int x, int y) {
    if(x<y) {
        return x;
    }
    else {
        return y;
    }
}
int find_max(int x, int y) {
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}