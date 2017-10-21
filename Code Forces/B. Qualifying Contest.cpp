#include<stdio.h>
#include<queue>
#include<string.h>
#include<algorithm>
using namespace std;

struct data
{
    char str1[20];
    int num,s;
    bool operator < (const data & p)const
    {
        return p.num>num;
    }
};

/*
int comp(char str1[20],char str2[20])
{
    int i,j,k,l,m,n,l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    l=min(l1,l2);
    str1[0]=str1[0]-'A'+'a';
    str2[0]=str2[0]-'A'+'a';
    for(i=0; i<l; i++)
    {
        if(str1[i]<str2[i])
        {
            str1[0]=str1[0]-'a'+'A';
            str2[0]=str2[0]-'a'+'A';
            return 1;
        }
        if(str2[i]<str1[i])
        {
            str1[0]=str1[0]-'a'+'A';
            str2[0]=str2[0]-'a'+'A';
            return 2;
        }
    }
    if(l==l1)
    {
        str1[0]=str1[0]-'a'+'A';
        str2[0]=str2[0]-'a'+'A';
        return 1;
    }
    if(l==l2)
    {
        str1[0]=str1[0]-'a'+'A';
        str2[0]=str2[0]-'a'+'A';
        return 2;
    }
}
*/
int main()
{
    priority_queue<data>q[10005];
    int i,j,k,l,m,n,t,r,nr,p;
    char str[20];
    data u,v,d;
    while(scanf("%d%d",&n,&r)==2)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%s%d%d",str,&nr,&p);
            strcpy(u.str1,str);
            u.num=p;
            u.s=i;
            q[nr].push(u);
        }
        for(i=1; i<=r; i++)
        {
            m=q[i].size();
            if(m>=2)
            {
                u=q[i].top();
                q[i].pop();
                v=q[i].top();
                q[i].pop();
            }
            if(m>=3)
            {
                d=q[i].top();
                q[i].pop();
            }
            //     printf("%d %d %d\n",u.num,v.num,d.num);
            //      /*
            if(m==2)
            {
                //      if(u.num==v.num)
                //          printf("?\n");
                //      else
                {
                    // if(strcmp(u.str1,v.str1)>0)
                    //   if(comp(u.str1,v.str1)==1)
                    //         if(u.s<v.s)
                    printf("%s %s\n",u.str1,v.str1);
                    //        else
                    //           printf("%s %s\n",v.str1,u.str1);
                }
            }
            //      */
            else if(m>=3)
            {
                //      {
                if(((u.num==v.num)&&(u.num==d.num))||(v.num==d.num))
                    printf("?\n");

                //      }
                else
                {
                    //   if(strcmp(u.str1,v.str1)>0)
                    // if(comp(u.str1,v.str1)==1)
                    //        if(u.s<v.s)
                    printf("%s %s\n",u.str1,v.str1);
                    //     else
                    //       printf("%s %s\n",v.str1,u.str1);
                }
            }
        }
    }
}
