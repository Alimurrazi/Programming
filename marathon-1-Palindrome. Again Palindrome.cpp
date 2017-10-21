#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n,index,f,b,a,last,w;
    char str[40000];
    while(gets(str))
    {
        l=strlen(str);
        last=l;
        k=0,index=0,f=0,b=0,a=0;
        str[l]=str[a];
        l=l+1;
        while(1)
        {
            f=0,b=0;
            for(i=0,j=l-1; ; i++,j--)
            {
                if(i==j)
                {
                    k=1;
                    break;
                }
                if(str[i]==str[j])
                {
                    f++;
                    b++;
                }
                if((f+b)==l)
                {
                    k=1;
                    break;
                }
                if(str[i]!=str[j])
                {
                    break;
                }
            }
            if(k==0)
            {
                a=a+1;
                for(w=l+a; w>last; w--)
                {
                    str[w]=str[w-1];
                }
                // str[l+1]=str[l];
                str[last]=str[a];
                l=l+1;
            }
            else
            {
                //   printf("l==%d\n",l);
                str[l]='\0';
                break;
            }
        }
        printf("%s\n",str);
    }
}
