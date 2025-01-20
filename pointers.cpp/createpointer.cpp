#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int *ptr;
    ptr=&x;
    cout<<ptr<<endl<<&x<<endl<<&ptr<<endl<<*ptr<<endl<<x<<endl;
    *ptr=7;
    cout<<x;


}