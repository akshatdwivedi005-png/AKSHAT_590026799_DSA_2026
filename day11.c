/*
Problem: Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.

Input:
- First line: two integers m and n representing the number of rows and columns
- Next m lines: n integers each representing the elements of the first matrix
- Next m lines: n integers each representing the elements of the second matrix

Output:
- Print the resultant matrix after addition, with each row on a new line and elements separated by spaces

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1

Output:
10 10 10
10 10 10
10 10 10

Explanation:
Each element of the result matrix is the sum of the corresponding elements from the two input matrices.

Test Cases:

Test Case 1:
Input:
2 2
1 2
3 4
5 6
7 8
Output:
6 8
10 12

Test Case 2:
Input:
1 3
10 20 30
1 2 3
Output:
11 22 33

Test Case 3:
Input:
3 1
1
2
3
4
5
6
Output:
5
7
9
*/

#include<stdio.h>
#include<string.h>
int main(){
    int n; // additon can only be done in square matrix
    printf("enter the size of square matrix:");
    scanf("%d", &n);
    int arr[n][n];
    int i,j;
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int arr2[n][n];
    printf("enter the elements of second array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    printf("\n");
    printf("the first matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("the second  matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("the sum of matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
