#include<iostream>
using namespace std;
int main() {
    int b;
    cout << "Enter the value of b : - " << "  " <<endl;
    cin>>b;
    cout<<b;

    if(b>0){
        cout<< "b is positive" <<endl;
    }
    else {
        cout<< "b is negative" <<endl;
    }

    int c,d;
    cin >> c >> d;
    cout<<"value of c and d is :- "<< c <<" " << d <<endl; //value of c and d is :- 89 78

    int e,f;
    cout<<"Insert the value of e & f :- "<<endl;
    cin>> e >> f;
    cout<<"Value of e and f is respectively :-" << e << " and " << f << endl;
    if(f>e){
        cout<<"Value of f is more than e or f is larger than e "<<endl;
    }
    else{
        cout<<" e is larger than  f" <<endl;
    }



}