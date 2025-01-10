#include <iostream>
using namespace std;
int main() {
    int a,b,choice;
    cout<<"Enter value for A :";
    cin>>a;
    cout << "Enter value for B :";
    cin>>b;
    cout<<"\n 1. Addition \n 2.Substraction \n 3. Multiplication \n 4. Division \n 5. Modules :";

    cout <<" Enter your choice :";
    cin>>choice ;

    if(choice==1)
    { 
        cout<<" Addition of This value is : "<<a+b<<endl;} 
    else {
        if (choice ==2)
        {
             cout<<" Substraction of these value is : "<<a-b<<endl;
        }
    else { 
        if (choice ==3)
        {
             cout<<" Multiplication of these value is : "<<a*b<<endl; 
        }
    else {
        if(choice ==4) 
        {
            cout<<"  Division of these value is : "<<a/b<<endl; 
        }
    else { 
        if(choice ==5)
        {
              cout<<" Modules of these value is : "<<a%b<<endl; 
        }
     else {
        if(choice >5)
        {
             cout <<" Invalid choice !!!!"<<endl;
        }
           }
        }
        }
       }
     }
    return 0;
}
