/*Qun 24 :- Write code for Printing Stars in Opposite Triangel Pattern ****
   1
  23
 456
78910
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENter the user input untill you want to print numbers with space :- "
         << " " << endl;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        // Printing Space :- n-i;
        int space = n - i;

        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;

        while (j <= i)
        {

            cout << count;
            count += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}



























/* o/p :-
   1
  23
 456
78910
*/