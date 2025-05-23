/*Qun 01 :- Write code for Printing Stars in same number of row and column according to user need
 *  *  *  *
 *  *  *  *
 *  *  *  *
 *  *  *  *
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<"So number of row and column is :- "<<n<<endl;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
}


}




















/* o/p :-
 *  *  *  *
 *  *  *  *
 *  *  *  *
 *  *  *  *
*/