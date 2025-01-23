#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
   cout<<s;

   for(int i=0 ; i< s.length() ; i++)
   {
    if(s[i]==' ')
    {
        continue;
    }
    
    if(i%2==0)
    {
        s[i]='a';
    }
   }
   cout<<endl<<s;
}
