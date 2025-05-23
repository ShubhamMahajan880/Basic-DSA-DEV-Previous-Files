/*Qun 20 :- Write code for Printing Stars in Opposite Triangel Pattern ****
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
    cout << "ENter thr number of row in which you want to print space and stars both :- " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // Printing  Space :- i-1;
        int space = 1;
        while (space < i)
        {
            cout << " ";
            space += 1;
        }
        int j = 1;
        // Printing Stars :- n-i+1;
        while (j <= n-i+1)
        {
            cout << "*";
            j += 1;
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