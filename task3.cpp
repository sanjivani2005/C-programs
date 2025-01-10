#include<iostream>
using namespace std ;
int main()
{
    int n,f1,f2,f3;
    cout<<" How many terms ? \n ";
    cin>>n;
    f1=1,f2=2;
    cout<<" Fibonacci series \n ";
    cout<<f1<<endl<<f2<<endl;
    for(int i=2;i<n;i++)
    {
        f3=f2+f1;
        cout<<f3<<endl ;
        f1=f2;
        f2=f3;
    }
    cout<<"\n ";
    return 0;
}