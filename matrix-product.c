#include<stdio.h>
int main(){
int n,i,j,m,a[100][100],b[100][100],c[100][100],p,q,k;
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
for(i=0;i<m;i++)
{
for (j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++){
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}}
printf("\n product is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
return 0;
}