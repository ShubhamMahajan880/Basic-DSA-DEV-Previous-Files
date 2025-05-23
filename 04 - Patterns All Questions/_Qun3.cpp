/*Qun 3 :- Write code for printing  couting numbers in rowwise****
1234
1234
1234
1234
 */

#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"enter till number of rows"<<endl;
    cin>>n;
    i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
        
    }
    
}
/* o/p :- 
12345
12345
12345
12345
12345
*/