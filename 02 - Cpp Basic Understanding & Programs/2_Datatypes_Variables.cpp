#include<iostream>
using namespace std;

int main() {
    int a = 123;
    cout<< a << endl;//123
char b = 's';
cout<< b <<endl;//b

bool bl = true;
cout << bl <<endl;//1

bool tl = false;
cout << tl <<endl;//0

float f = 2.5;
cout<< f <<endl;//2.5

double d = 2.998;
cout<< d <<endl;// 2.998

char t;
int size = sizeof(t);
cout<< "Size of t is represented as :" << size <<endl;// Size of t is represented as :1 -  1 as is its character

int measure = sizeof(d);
cout<< "Size of d is represented as :"<< measure<<endl; //Size of d is represented as :8


unsigned int h = 112;
cout<< h <<endl;//112


unsigned int i = -112;
cout<< i <<endl;//4294967184
}
