/*
Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

Input:
- Single line: a lowercase string containing only alphabetic characters (no spaces)

Output:
- Print the transformed code name after applying the mirror operation

Example:
Input:
hello

Output:
olleh

Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored
*/
#include<stdio.h>
#include<string.h>
int main(){
char code[100];
printf("enter the code:");
scanf("%s", code);
char temp=0,i;
int n=strlen(code);
for(i=0;i<n/2;i++){
temp=code[i];
code[i]=code[n-i-1];
code[n-i-1]=temp;
}
printf("%s", code);

return 0;
}