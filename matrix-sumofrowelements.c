#include<stdio.h>
int main(){
int n,i,j,m,a[100][100],Sum;
printf("enter the row of  matrix:");
scanf("%d",&m);
printf("enter the coloumn of  matix:");
scanf("%d",&n);
printf("enter elements of matix:");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
    {
        Sum = 0;
       for(j=0;j<n;j++)

        {
            Sum=Sum+a[i][j];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
    }
    
    return 0;
}