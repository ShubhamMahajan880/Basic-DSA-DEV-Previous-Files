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
        // Numbers printing from 1 to n-i+1
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<j<<" ";
            j+=1;
        }
        // Star Printing :- 
         j = 1;
        while (j<= (i-1)*2)
        {
            cout<<"*";
            j+=1;
        }
        // Number Printing From n-i+1 to 1 :- 
        j = n - i + 1;
        while (j>=1)
        {
            cout<<j<<" ";
            j-=1;
        }

        i+=1;
        cout<<endl;
    }

}