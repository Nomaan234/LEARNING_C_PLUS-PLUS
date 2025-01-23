#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
    cout<<s;

    s ="md "+ s + " atiq";
    cout<<endl<<s;
}