/*
Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards
*/
#include<stdio.h>
#include<string.h>
int main(){
char pal[100];
printf("enter the string:");
scanf("%s", pal);
int temp=0,i;
char rev[100];
strcpy(rev,pal);
int n=strlen(pal);
for(i=0;i<n/2;i++){
temp=pal[i];
pal[i]=pal[n-i-1];
pal[n-i-1]=temp;
}
if(strcmp(rev,pal)==0){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}