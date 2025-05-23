#include<iostream>
using namespace std;
int main() {
    char  n;
    cout<<"Insert the value of n"<<endl;
    cin>>n;
    if (n>='A' && n<='Z')
    {
       cout<<"Hence insterted character n is in Uppercase";
    }
    else if (n>='a' && n<='b')
    {
        cout<<"Then insterted character n is in Lowercase";
    }
    else if (n>='0' && n<='9')
    {
        cout<<"Then insterted character n is a number";
    }
    else {
        cout<<"n is neither a alphabate nor a number";
    }
    

}