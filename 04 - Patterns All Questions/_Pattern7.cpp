/*Qun 16 :- Write code for increasing  Alphabetical Charactees  given that Line Number having that same number character in Trinagle pattern****
A 
B C 
C D E 
D E F G 
E F G H I 
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Pres the number of line in which you want to print  ALphabetical Increasing  characters in Triangular Form :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
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
A 
B C 
C D E 
D E F G 
E F G H I 
*/