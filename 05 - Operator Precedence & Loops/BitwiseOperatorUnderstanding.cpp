/*
1) Bitwise AND :- & 
AND - & - Bitwise and work in BIT forms 
Ex :- a = 2, b = 3 => a & b
In Binary Format -  2 - 10                                  
                and 3 - 11
                Add :-  10 This is in bit form, So in binary format = 2
Ex :- a = 5, b = 7 => a & b
In Binary Format -  5 - 101                                  
                and 3 - 111
                Add :-  101 This is in bit form, So in binary format = 5


i/p                o/p
x    y             z
0    1             0
0    0             0
1    0             0
1    1             1 // In Bitwise Add Operator if there is one 1 then aage check kro if another one is 1 then both are 1,  so in this case o/p is :- 1
                        In bitwise Operator is zero(0) , to aage check hi mt kro

2) Bitwise OR :- |
In bitwise OR dono me se koi sa b ek one(1) he to 1 aa jayega, But in terms of bits :-

i/p                o/p
x    y             z
0    1             1
0    0             0
1    0             1
1    1             1

Ex :- a = 2, b = 4 => a | b
In Binary Format -  2 -  10                                  
                and 4 - 100
                Add :-  110 This is in bit form, So in binary format = 6

Ex :- a = 3, b = 6 => a | b
In Binary Format -  3 -  11                                  
                and 6 - 110
                Add :-  111 This is in bit form, So in binary format = 7


3) Bitwise NOT :- ~
x            z
0            1
1            0                
For solving Bitwiese not first right the number then take negative of this number Then take 1's Complement then take 2's complement = ANs
ex :- a = 2 so ~a = ?

a = 2 :-        000000.....0010
~a :-           111111.....1101
1's Complement  000000.....0010
2's Complement               +1
                00000......0011  =   3


4) Bitwise XOR :- ^ 
In Bitwise XOR if both the inputs are same then o/p will be 0 
and similarly, if both the inputs are different then o/p will be 1

Ex :- a = 5 & b = 7 then a ^ b = ?
a : 5 = 101
b : 7 = 111
a^b : = 010 = Decimal value of 2

Decimal        Binary 
1           	1
0           	0
2           	10
3           	11
4           	100
5           	101
6           	110
7           	111
8           	1000
9           	1001
10	            1010
11	            1011
12	            1100
13	            1101
14	            1110
15	            1111
*/