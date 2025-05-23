/*Qun 14 :- Write code for  printing Alphabetical Charactees increasing according to Row Number in Triangle Pattern****
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Bro, How many lines you want to print for Alphabate :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j+=1;
        }
    cout<<endl;
    i+=1;
    }

}




















/* o/p :-
A 
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
*/