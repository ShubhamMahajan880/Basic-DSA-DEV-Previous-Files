/*Qun 10 :- Write code for printing repeating Alphabate Characters in Square pattern****
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"How many rows you want to print for Alphabate Printing :- ";
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int colm = 1;
        while (colm<=n)
        {
            char ch = 'A' + row - 1;
            cout<<ch<<" ";
            colm+=1;
        }
        cout<<endl;
        row+=1;

    }
}






















/* o/p :-
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 
*/