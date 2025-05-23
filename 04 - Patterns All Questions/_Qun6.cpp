/*Qun 6(1.1) :- Write code for printing stars in triaangular format as inincreasing order****
*
**
***
****
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter number of row you want to print stars "<<endl;
    cin>>n;
    int row = 1;
    

    while (row<=n)
    {
        int colm = 1;
        while (colm<=row)
        {
            cout<<"*";
            colm = colm + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}
/* o/p :-
*
**
***
****
*/