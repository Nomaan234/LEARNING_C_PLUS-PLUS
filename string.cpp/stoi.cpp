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

    int n = stoi(s);
    cout<<endl<<n;

    n += 3;
    cout<<endl<<n;
    
}