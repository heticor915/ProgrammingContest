#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
/*
Make a simple program that reads four variables named A, B, C and D.
Calculate and print the difference of the product of A and B with
the product of C and D (A * B - C * D).
 
Input
The input file contains 4 integer numbers.
Output
Print DIFERENCA (DIFFERENCE in portuguese) according to the following example,
with a blank space before and after the equal signal.
*/
int main(void){
   int A,B,C,D;
   scanf("%d %d %d %d",&A,&B,&C,&D);
   printf("DIFERENCA = %d\n",((A*B)-(C*D)));
    return 0;   
}