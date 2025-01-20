#include<iostream>
using namespace std;
void  rever(int n ,int x)
{
    if(x>n)
    {
        return;
    }

    cout<<x<<endl;
    rever(n ,x+1);
}

int main()
{
    int n;
    int x=1;
    cout<<"enter the number n : ";
    cin>>n;

    rever(n ,x);
}