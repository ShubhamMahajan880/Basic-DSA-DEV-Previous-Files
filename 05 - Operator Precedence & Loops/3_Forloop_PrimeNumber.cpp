#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the the number for which you want to check that the entered number is prime or not :- "<<endl;
 cin>>n;

 int i = 2;
 for ( i = 2; i <= n-1; i++)
 {
    if (n%i == 0)
    {
        cout<<"Then it's a prime number ";
        break;
    }
    else{
        cout<<"Not a Prime Number";
        break;
    }
    
 }
 














}