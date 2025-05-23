/* Qun-1.1 :- 
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row which you want to print :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<" * ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

/* Qun-2.1 :-  
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Print value of n according to row and column :-"<<endl;
cin>>n;

int i= 1;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout<<i<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}
}


/* Qun-3.1 :-
1
1 2
1 2 3
1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the row you want to print of Calculating Numbers :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}


/* Qun-4.1 :-
4 
4 3
4 3 2
4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the row you want to print of Calculating Numbers :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    }
    



/* Qun-5.1 :-
1 
2 3 
4 5 6 
7 8 9 10
*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"How many rows you want to prinnt :- ";
    cin>>n;

    int i = 1;
    int count = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}


/* Qun-10.1 :-
A 
B B 
C C C 
D D D D
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENter the number of row How many you want to print :- "<< " " <<endl;
    cin>>n;
    int i = 1;    
    while (i<=n)
    {
        int j = 1;
        char ch = 'A'+i-1;
        
        while (j<=i)
        {
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}

/* Qun-11.1 :-
A 
A B 
A B C 
A B C D 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of row  you want to print Alphabets in constant Patterns :- "<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}

/*
Qun 12.1 :-
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
Qun 13.1 :- 
A 
B C 
C D E
D E F G 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of row  you want to print Alphabets in constant Patterns :- " << endl;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 'A' + i + j + -2;
            cout << ch << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}





















































}
