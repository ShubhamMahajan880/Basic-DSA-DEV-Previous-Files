/*Qun 23 :- Write code for Printing Stars in Opposite Triangel Pattern ****
1234
 234
  34
   4
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
    while (i <= n)
    {
        int space = 1;
        while (space < i)
        {
            cout << " ";
            space += 1;
        }
        int j = 1;
        int value = i;
        while (j <= n - i + 1)
        {
            cout << value;
            value+=1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}













/* o/p :-
1234
 234
  34
   4
*/