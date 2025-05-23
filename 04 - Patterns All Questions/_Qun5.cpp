/*Qun 5 :- Write code for printing couting numbers min to mazx or decreasing to increasing order rowwise****
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
 */
#include<iostream>
using namespace std;
int main() {

int n;
cout<<"Enter number of row and column till you want to print counting number incrasing :- "<<endl;
cin>>n;

int i = 1;
int count = 1;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        cout<<" "<<count ;
        count+=1;
        j+=1;
    }
    cout<<" "<<endl;
    i+=1;
}
}


/* o/p :- 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
