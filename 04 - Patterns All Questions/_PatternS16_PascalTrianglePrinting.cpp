/*Qun 25 :- Write code for Printing Stars in Opposite Triangel Pattern ****
   1
  121
 12321
1234321
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter User Input for How Many Lines you Want to Print in Tripple Traingle Format :- " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // For the Space :-
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        // For the First Triangle :-
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j += 1;
        }

        // For the second Triangle :-
        int start = i - 1;
        while (start)
        {
            cout << start;
            start -= 1;
        }
        cout << endl;
        i += 1;
    }
}






























/* o/p :-
   1
  121
 12321
1234321
*/

/* o/p :-
     1
   121
  12321
 1234321
123454321
*/
