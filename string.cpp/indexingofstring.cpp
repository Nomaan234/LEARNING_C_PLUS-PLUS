#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
    cout<<s<<endl;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;
    cout<<s[5]<<endl;
    cout<<s[6]<<endl;
    cout<<s[7]<<endl;
    cout<<s[8]<<endl;

    s[3]='J';
    cout<<s;
}