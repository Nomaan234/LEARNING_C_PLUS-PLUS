#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
   getline(cin,s);
   cout<<s;

   int count=0;
   for( int i=0 ; i< s.length() ; i++)
   {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
    {
        count++;
    }
   }

   cout<<endl<<"number of vowels are : "<<count;

}