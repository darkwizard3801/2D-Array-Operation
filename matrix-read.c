#include<stdio.h>
int main(){
int n,i,j,m,a[100][100];
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
return 0;
}
