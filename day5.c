/*
Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed
*/
#include<stdio.h>
int main(){
int n,m,i,j,temp;
printf("enter the number of entries in server log 1:");
scanf("%d", &n);
int log1[n];
printf("enter the number of entries in server log 2:");
scanf("%d", &m);
int log2[m];
printf("enter the entries of log1:\n");
for(i=0;i<n;i++){
    scanf("%d", &log1[i]);
}
printf("\n");
printf("enter the entries of log2:\n");
for(j=0;j<m;j++){
    scanf("%d", &log2[m]);
}
printf("\n");
int arr[n+m];
int k=0;
for(i=0;i<n;i++){
arr[k++]=log1[i];
}
for(i=0;i<m;i++){
arr[k++]=log2[i];
}
printf("the sorted and merged array is:\n");
for(k=0;k<n+m;k++){
for (int i = 0; i < n+m-1; i++) {
for (int j = 0; j < n+m - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
return 0;
}



