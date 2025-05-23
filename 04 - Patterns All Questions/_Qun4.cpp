/*Qun 4 :- Write code for printing couting numbers max to min or increasing to decreasing  rowwise****
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
 */
#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Print Number of Rows you want to print in Reverse Order :- "<<endl;
    cin>>n;
    i = 1;
    while (i<=n)
    {   j = 1;
        while (j<=n)
        {
            cout<<n-j+1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
}


/* o/p :- 
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/