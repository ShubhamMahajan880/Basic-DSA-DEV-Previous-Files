/*Qun 19 :- Write code for Printing Stars in Opposite Triangel Pattern ****
****
***
**
*
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter that How Many Rows You Want To Print in Which You Want Starts & Spaces :- " << endl;
    cin >> n;

    // Printing Star :- n-i+1;
    // No Need to Print Space :- i-1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int star = n - i + 1;
        while (j <= star)
        {

            cout << "*";
            star -= 1;
        }
        cout << endl;
        i += 1;
    }
}

/* o/p :-
****
***
**
*
*/