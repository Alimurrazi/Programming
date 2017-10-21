#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100005];
    int ara[100005];
    int i,j,k,l,m,n,t,p,s,e,l1,l0,f1,f0;
   // k=2^3;
  //  printf("%d\n",k);
    while(scanf("%d%d%d",&n,&s,&e)==3)
    {
        int l,f,q;
        f=-1;
        s=s-1;
        e=e-1;
        scanf("%s",str);
     //   k=(ara[s]-'0')^(ara[e]-'0');
     //   printf("%d\n",k);
   //  printf("s===%d e===%d\n",s,e);
        if(str[s]!=str[e])
            printf("1\n");
        else
            printf("0\n");
        /*
        if(s<e)
        {
            for(i=s; i<=e; i++)
            {
                if(str[s]==str[i])
                    l=i;
                if(str[s]!=str[i] && f==-1)
                    f=i;
            }
         //   printf("f==%d l==%d\n",f,l);
            p=e-l;
            q=f-s;
            p=min(p,q);
       //     printf("%d\n",p);
        }
        else
        {
            for(i=s;i>=e;i--)
            {
           //     printf("%c %c\n",str[s],str[i]);
                if(str[s]==str[i])
                    l=i;
                if(str[s]!=str[i] && f==-1)
                {
                //    printf("inside %c %c\n",str[s],str[i]);
                    f=i;
                }
            }
          //  printf("f==%d l==%d\n",f,l);
            p=fabs(e-l);
            q=fabs(f-s);
            p=min(p,q);
        }
        printf("%d\n",p);
        */
    }
}
