/*Qun 7(2.1) :- Write code for printing same numbers in triangle pattern****
1
2 2
3 3 3
4 4 4 4
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter number of row you want to print  "<<endl;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int colm = 1;
        while (colm<=row)
        {
            cout<<row;
            colm = colm + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    


}


/* o/p :-
1
2 2
3 3 3
4 4 4 4
*/