#include<iostream>
using namespace std;

void swap(  int* x, int* y)
    {
        // *x=*x+*y;
        // *y=*x-*y;
        // *x=*x-*y;

        int temp=*x;
        *x=*y;
        *y=temp;
        
    }
    
int main()
{
    int x;
    cout<<"enter any number : ";
    cin>>x;

    int y;
    cout<<"enter any number : ";
    cin>>y;

    
          cout<<"before swap : "<<x<<" "<<y<<endl;

   swap(&x,&y);
   cout <<"after swap : "<<x<<" "<<y;

}
