#include <stdio.h>
// #include <conio.h> (Use in C console)
void main(){
    int i,j,k,n;
    printf("Enter the order of the sq. matrix");
    scanf("%d",&n);
    int A[n][n],B[n][n],C[n][n];
    printf("Enter the elements of the first matrix"); //getting the elements of MAT A
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[n][n]);
    printf("Enter the elements of the second matrix"); //getting the elements of MAT B
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&B[n][n]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C[n][n]+=A[n][n]*B[n][n];
            printf("%d\t",C[n][n]);
            printf("\n")
        }
        
    }   
    // getch(); (Use in console) 
}