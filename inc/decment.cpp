#include <iostream>
using namespace std;
int main()
// {
//    int x=8;
//    cout<< x++ <<endl;
//    cout<< x <<endl;
//    cout<< (x += 1) <<endl;
// }
{
    int x=8;
    cout<< x++ <<endl; //post increament (first use the variable then increment it)
    cout<< x <<endl;
    cout<< ++x <<endl; //pre increament (first increament the variable then use it)
    cout<< x <<endl;

    cout<< x-- <<endl; //post decrement (first use the variable the decrement it)
    cout<< x <<endl;
    cout<< --x <<endl; //pre decrement (first decrement the variable then use it)
    cout<< x <<endl;

}