/*Qun 21 :- Write code for Printing Stars in Opposite Triangel Pattern ****
1111
 222
  33
   4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter that How Many Rows You Want To Print in Which You Want Starts & Spaces :- " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        int space = 1;
        while (space < i)
        {
            cout << " ";
            space += 1;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j += 1;
        }

        cout << endl;
        i += 1;
    }
}














/* o/p :-
1111
 222
  33
   4
*/