#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(   (n%5==0 || n%3==0)  &&  (n%15!=0)  )
    {
        cout<<"integer is divible by 5 or 3 but not by 15";
    }
     else
     {
        cout<<"not able to fulfill the cinditons";

     } 
}