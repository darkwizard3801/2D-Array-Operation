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


    
    if(m==n)
    {
         printf("\nThe Diagonals elements of a matrix are :: \n\n");  
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("\t%d",a[i][j]);    
                     else
                         printf("\t"); 
                 }
                printf("\n\n");  
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }

    return 0;
}