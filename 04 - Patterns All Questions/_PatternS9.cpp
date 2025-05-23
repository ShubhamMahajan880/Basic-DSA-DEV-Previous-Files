/*Qun 18 :- Write code for Printing Stars in Opposite Triangel Pattern ****
   *
  **
 ***
****
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert the number of row in which you want to print Start & Space :-   "<<endl;
    cin>>n;

    int i = 1;

    // Printing Space First
    while (i<=n)
    {
        int space = n - i;
        while (space)
    {
        cout<<" ";
        space-=1;
    }
    // Printing Star
    int j = 1;
    while (j<=i)
    {
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i+=1;

    }




}










/* o/p :-
   *
  **
 ***
****
*/