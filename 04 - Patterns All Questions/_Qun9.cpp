/*Qun 9 :- Write code for printing same numbers in triangle pattern****
1 
2 1
3 2 1
4 3 2 1
 */

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Print Brother How many Rows you wants to print :- "<<" "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        int value = i;
        while (j<=i)
        {
            cout<<value<<" ";
            value-=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}



















/* o/p :-
1 
2 1 
3 2 1 
4 3 2 1 
*/
