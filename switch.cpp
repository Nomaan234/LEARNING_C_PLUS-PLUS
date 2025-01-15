#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter integer a : "<<endl;
    cin>>a;

    cout<<"enter  operator : "<<endl;
    cin>>op;

    cout<<"enter integer b : "<<endl;
    cin>>b;

    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"not valid character"<<endl;
    }

}