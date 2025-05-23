/*Qun 8 :- Write code for printing same numbers in triangle pattern****
1
2 3
3 4 5
4 5 6 7
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"How many rows you want to prinnt :- ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        int value = i;
        while (j<=i)
        {

            cout<<value<<" ";
            value+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}



















/* o/p :-
1
2 3
3 4 5
4 5 6 7
*/