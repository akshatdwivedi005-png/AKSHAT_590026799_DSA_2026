/*
Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
*/
#include<stdio.h>
#include<math.h>
int power(int n, int m){
    if(n==0){
    return 0;
    }
    if(n==1){
    return 1;
    }
    if(m==0){
    return 1;
    }
    else{
        return n*pow(n,m-1);
    }
}
int main(){
    int n,m;
    printf("enter the base number:");
    scanf("%d", &n);
    printf("enter the power to be calculated:");
    scanf("%d", &m);
    printf("the value of %d to the power %d is %d", n,m, power(n,m));
    return 0;
}
