#include <iostream>
using namespace std;

int sum( int x , int y)
{
    return x+y;
}
int main()
{
    int x,y;
    cout<<"enter 1st number : ";
    cin>>x;

    cout<<"enter 2nd number : ";
    cin>>y;

     cout<<sum(x,y);
}