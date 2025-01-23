#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter the integer : ";
  cin>>n;
    cout<<n;

    string s= to_string(n);
    
    cout<<endl<<s;

    s+= "dd";
    cout<<endl<<s;
}