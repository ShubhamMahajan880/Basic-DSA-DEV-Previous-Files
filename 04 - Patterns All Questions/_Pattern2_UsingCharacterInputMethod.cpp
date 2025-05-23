/*Qun 11 :- Write code for printing increasing Alphabates Rowwise in Square  pattern using Character Input Methods 
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
 */
#include<iostream>
using namespace std;
int main() {
    // int n;
    char n;
    cout<<"Enter the number of row you want to print for Alphabetical Pattern :- "<<endl;
    cin>>n;

    // int i = 1;
    char i = 'A';
    while (i<=n)
    {
        // int j = 1;
        char j = 'A';

        while (j<=n)
        {
            // char ch = 'A' - i + j ;
            cout<<i<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}
















/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
