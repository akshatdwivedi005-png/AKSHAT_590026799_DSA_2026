/*Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
/*
#include<stdio.h>
int main(){
int n,i,pos,el,temp;
printf("enter the size of the array:");
scanf("%d", &n);
int arr[n+1]; // extra space to insert the element
printf("enter the elements of the array:\n");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("\nthe formed array is:\n");
for(i=0;i<n;i++){
printf("%d\t", arr[i]);
}
printf("\nenter the position number at which element is to be inserted:");
scanf("%d", &pos);
printf("enter the element which is to be inserted:");
scanf("%d", &el);
for(i=n+1;i>pos-1;i--){
arr[i]=arr[i-1];
}
arr[pos-1]=el;
printf("the array with insertion is:\n");
for(i=0;i<n+1;i++){
printf("%d\t", arr[i]);
}
return 0;
}
*/
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/
#include<stdio.h>
int main(){
int n,i,j,first,second,target,sum=0;
printf("enter the size of array:");
scanf("%d", &n);
int nums[n];
printf("enter the entries of array:\n");
for(i=0;i<n;i++){
scanf("%d", &nums[i]);
}
printf("the formed array is:\n");
for(i=0;i<n;i++){
printf("%d\t", nums[i]);
}
printf("\n");
printf("enter the target value:");
scanf("%d", &target);
for(i=0;i<n;i++){
first=nums[i];
for(j=i+1;j<n;j++){
second=nums[j];
sum=first+second;
if(sum==target){
printf("%d and %d", i,j);
}
}
}
return 0;
}
