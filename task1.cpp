#include <iostream>
using namespace std;
void strReversed(string s){
    string line ;
    for(int i=s.length()-1,j=0;i>=0;i--,j++)
    {
        line[j]=s[i];
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<line[i];
    }
    cout<<"\n ";
}

int main() {
    string s;
    cout<< "Enter a string :";
    getline(cin>>ws,s);
    strReversed(s);
    return 0;
}
