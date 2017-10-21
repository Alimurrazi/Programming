#include<stdio.h>
int main()
{
    char str1[2500],str2[2500];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        int a=0,b=n-1;
        scanf("%s",str1);
        str2[n]='\0';
        int ch=0;
        for(i=n-1;i>=0;i--)
        {
          //  if(i%2==0)
            if(ch==0)
            {
                str2[b]=str1[i];
                b--;
                ch=1;
            }
            else
            {
                str2[a]=str1[i];
                a++;
                ch=0;
            }
        }
        printf("%s\n",str2);
    }
}
