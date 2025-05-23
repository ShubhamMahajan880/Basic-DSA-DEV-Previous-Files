#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter How many steps of Fibonacci Series you want to print :- "<<endl;
    cin>>n;

    int i = 0;
    int a = 0, b = 1;
    cout<< a  <<" " <<b <<" ";
    for ( i = 0; i <= n; i++)
    {
        int nextnumber = a + b;
        cout<< nextnumber << " ";

        a = b;
        b = nextnumber;
    }
    
    


    
















}