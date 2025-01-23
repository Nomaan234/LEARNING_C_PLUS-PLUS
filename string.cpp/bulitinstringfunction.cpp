#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
    cout<<s;

    s.push_back('a');
    cout<<endl<<s;

     s.pop_back();
    cout<<endl<<s;

    s.append(" atiq ");
    cout<<endl<<s;

    s.clear();
    cout<<endl<<"empty"<<s;
}