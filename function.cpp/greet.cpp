#include <iostream>
using namespace std;

void other()
    {
        cout<<"out of indian";
    }

void  place()
{
    cout<<"i am in india"; 
}
int main()
{
    char ch;
    cout<<"enter the country : ";
    cin>>ch;

    if (ch=='i')
   {
    place();
   }

   else
   {
    other();
   }
}