/*Qun 12 :- Write code for increasing printing Alphabetical Charactees in Square pattern****
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter  how many no. of rows & columns you want from your output :- "<<endl;
    cin>>n;

    int i = 1;
    char ch = 'A';

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;

    }
    
}
















/* o/p :-
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/