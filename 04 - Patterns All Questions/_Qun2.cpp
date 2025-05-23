/*Qun 02 :- Write code for printing similar couting numbers in different rows****
1111
2222
3333
4444
 */

#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter the value of n :- "<<endl;
    cin>>n;
    i = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout << i;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
        
    }
    
    

}


/* o/p :- 
1111
2222
3333
4444
*/
