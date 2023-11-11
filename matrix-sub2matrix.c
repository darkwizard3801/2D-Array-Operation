#include<stdio.h>
int main(){
int n,i,j,m,a[100][100],b[100][100],c[100][100],p,q;
printf("ente the row of 1st matrix:");
scanf("%d",&m);
printf("ente the coloumn of 1st matix:");
scanf("%d",&n);
printf("enter elements of 1st matix:");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
scanf("%d",&a[i][j]);
}
}
printf("ente the row of 2nd matrix:");
scanf("%d",&p);
printf("ente the coloumn of 2nd matix:");
scanf("%d",&q);

printf("enter elements of 2nd matix:");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)

{
scanf("%d",&b[i][j]);
}
}
printf("the  1st matrix:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("the  2nd matrix:\n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)

{
printf("%d\t",b[i][j]);
}
printf("\n");
}
if(m==p&n==q)
{
   
      for(i=0;i<m;i++)
{
    for(j=0;j<n;j++){

    c[i][j]=a[i][j]-b[i][j];
    }
    }
     printf("substacion of 2 matrix is:\n");
    for(i=0;i<m;i++)
    
{
    for(j=0;j<n;j++){

printf("%d\t",c[i][j]);
}
printf("\n");
}}
else{
    printf("sum is not possible");
}

return 0;
}