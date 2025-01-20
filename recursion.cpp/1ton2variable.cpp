#include<iostream>
using namespace std;

void rever(int n)
{
    if(n==0)
    {
        return;
    }
    rever(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cout<<"enter the number n : ";
    cin>>n;

    rever(n);
}