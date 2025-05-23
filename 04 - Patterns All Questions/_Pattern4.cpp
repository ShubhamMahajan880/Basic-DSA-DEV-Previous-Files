/*Qun 13 :- Write code for increasing printing Alphabetical Charactees in Square pattern****
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many rows you want to print in ALphabetical Square :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;

    }
    

}


















/* o/p :-
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/