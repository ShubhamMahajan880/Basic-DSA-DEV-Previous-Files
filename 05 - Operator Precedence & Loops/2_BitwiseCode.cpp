#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 6;

    cout<<" a&b " << (a & b) << endl; // a&b 4 
    cout<<" a|b " << (a | b) << endl; // a|b 7
    cout<<" ~a " <<  (~a   ) << endl; // ~a -6
    cout<<" a^b " << (a ^ b) << endl; // a^b 3

    /*
    Left Shift Operator :- a << n then  Ans :- a*2^n
    RIght Shift Operator :- a >> n then Ans ::- a/2^n
    */
cout<< (17>>1) <<endl;// 8
cout<< (17>>2) <<endl;// 4
cout<< (19<<1) <<endl;// 38
cout<< (19<<2) <<endl;// 76

/* Post Increment (i++) :- Pehle use kr le phir Badhana
   Pre Increment (++i)  :- Pehle bdha le phr use krna 

   Post Decrement (i--) :- Pehle use kr le phr km kr dena
   Pre Decrement (--i) :- Pehle km kr le phr use kr lena
*/

int i = 10;
cout<< (++i) <<endl; 
// Pehel bdhai, i=11, phr use kri i=11
cout<<(i++) <<endl;
// Pehhe uSe kr le, i=11, phr bdha dena i=12
cout<<(--i)<<endl;
// Pehle km kr le, i=11, phr use kr lena i=11
cout<<(i--)<<endl;
// Pehle use kr le, i=11, phr km kr lena i=10
/*o/p :- 
11
11
11
11
*/

/*
After For loop in last session discuss about Variable & its Scope and Operator Precedence Order of Operators
*/

}