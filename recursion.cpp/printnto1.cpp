#include<iostream>
using namespace std;

void rever(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<endl;
    rever(n-1);
}

int main()
{
    int n;
    cout<<"enter the number n : ";
    cin>>n;

    rever(n);
}