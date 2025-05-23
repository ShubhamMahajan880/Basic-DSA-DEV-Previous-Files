/*Qun 15 :- Write code for increasing printing Alphabetical Charactees in Triangular pattern****
A
B C
D E F
G H I J
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of row  you want to print Alphabets in constant Patterns :- " << endl;
    cin >> n;

    int i = 1;
    char start = 'A';

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {

            cout << start << " ";
            start += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}

















/*
A 
B C
D E F
G H I J
*/