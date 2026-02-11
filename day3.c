/*
Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
*/
/*
#include<stdio.h>
int main(){
int n,i,j,count=0,target;
printf("enter the size of array:");
scanf("%d", &n);
int arr[n];
printf("enter the elements of array:\n");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("\n");
printf("the formed array is:\n");
for(i=0;i<n;i++){
printf("%d\t", arr[i]);
}
printf("\nenter the target value to be searched:");
scanf("%d", &target);
for(i=0;i<n;i++){
    count++;
    if(target==arr[i]){
        printf("found at index: %d", i);
        break;
    }
}
printf("\n comparison:%d", count);
return 0;
}
*/
/*
ou are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ arr.size() + 1
*/
#include<stdio.h>
int main(){
int size,n,i,sum_expected,missing, sum=0;
printf("enter the size of array:");
scanf("%d", &size);;
printf("enter n:");
scanf("%d", &n);
int arr[size];
printf("enter the entries of array:\n");
for(i=0;i<size;i++){
scanf("%d", &arr[i]);
}
printf("\n");
printf("the formed array is:\n");
for(i=0;i<size;i++){
printf("%d\t", arr[i]);
}
sum_expected=(n*(n+1))/2;
for(i=0;i<size;i++){
    sum=sum+arr[i];
}
missing=sum_expected-sum;
printf("\nthe missing element in array is: %d", missing);
return 0;
}
