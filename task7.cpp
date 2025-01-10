#include<iostream>
using namespace std;
int main()
{
    int total_sub;
    int sum=0;
    cout<<" Enter number of total subject : "<<endl;
    cin>>total_sub;
    int array[total_sub];
    for(int i=0;i<total_sub;i++)
    {
        cout<< " Enter subject "<<i+1<<" Marks"<<endl;
        cin>>array[i];
        sum += array[i];
     }
     cout<<" The sum = "<<sum<<endl;
     float average ;
     average =sum/ total_sub;
     cout<<" The average ="<<average<<endl;
}