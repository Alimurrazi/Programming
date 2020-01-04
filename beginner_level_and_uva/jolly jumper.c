#include<stdio.h>
int main()
{
int n,a[3000];
do
{
int z=0,j=1,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
if((a[i+1]-a[i])==(n-j))
z++;

else
break;

}

else
{
if((a[i]-a[i+1])==(n-j))
z++;

else
break;
}

j++;
}
if(z==(n-1))
printf("Jolly");

else
printf("Not jolly");
}
while(!feof(stdin));
}
