#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
    cout<<s;
    int n=s.length();
    reverse(s.begin()+1, s.begin()+4);
    
    cout<<endl<<s;

}