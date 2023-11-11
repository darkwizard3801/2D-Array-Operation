#include<stdio.h>
int main(){
int n,i,j,m,a[100][100],sum=0,pro=1;
printf("ente the row");
scanf("%d",&m);
printf("ente the coloumn");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
scanf("%d",&a[i][j]);
}
}
printf("the  elements are:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

{
    sum=sum+a[i][j];
    pro=pro*a[i][j];
}}
printf("sum is:%d\n",sum);
// for(i=0;i<m;i++)
// {
//     for(j=0;j<n;j++)

// {
//     pro=pro*a[i][j];
// }}
printf("product is:%d\n",pro);
return 0;
}
