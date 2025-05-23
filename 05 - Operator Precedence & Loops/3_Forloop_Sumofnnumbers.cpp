#include <iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the number till where you want to sum of all numbers :- "<<endl;
cin>>n;

cout<<"Printing sum of numbers from 1 to"<< n <<"  :- " << endl;
int i= 0;
int sum = 0;

for ( i = 0; i <= n ; i++)
{
    sum+=i;
}


cout<< sum <<endl;





}