#include <stdio.h>

int main()
{
   int rows,columns;
   printf("Enter no of rows: ");
   scanf("%d",&rows);
   printf("Enter no of columns: ");
   scanf("%d",&columns);
   int matrix[rows][columns];
   printf("Enter the matrix\n");
   for(int i=0;i<rows;i++){
       for(int j=0;j<columns;j++){
           scanf("%d",&matrix[i][j]);
       }
   }
   printf("Lower triangular matrix of above matrix is\n");
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        if(i>j){
            printf("0\t");
        }else{
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n");
   }
    return 0;
}
