#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a integer : ";
    cin>>n;
    bool flag=true;
    
    for(int i=2 ; i<n ; i++)
    {
        if (n%i==0)
        {
            flag=false;
            cout<<"composite number";
            
        }
        break;

        
    }

    if(flag==true)

    {
        cout<<"prime number";
    }


}