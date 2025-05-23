/*Qun 11 :- Write code for printing increasing Alphabates Rowwise in Square  pattern****
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of row  you want to print Alphabets in constant Patterns :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}





















/* o/p :-
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/