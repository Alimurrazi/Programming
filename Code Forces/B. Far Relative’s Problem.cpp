#include<stdio.h>
int main()
{
    int m1[5005],m2[5005],f1[5005],f2[5005];
    int i,j,k,l,m,n,fr,to,ans,tm,tf,nom,nof;
    char str[10];
    while(scanf("%d",&n)==1)
    {
        j=1;
        l=1;
        for(i=1; i<=n; i++)
        {
            scanf("%s",str);
            if(str[0]=='M')
            {
                nom=j;
                scanf("%d%d",&m1[j],&m2[j]);
                j++;
            }
            else
            {
                nof=l;
                scanf("%d%d",&f1[l],&f2[l]);
                l++;
            }
        }
        k=0,ans=0;
        for(i=1; i<=nom; i++)
        {
            k=0;
            fr=m1[i],to=m2[i];
            tm=i+1,tf=1;
            while(1)
            {
                for(j=tf; j<=nof; j++)
                {
                    if((f1[j]>=fr && f1[j]<=to)||(f2[j]>=fr && f2[j]<=to)||(f1[j]<fr && f2[j]>to))
                    {
                        k=k+2;
                        tf=j+1;
                        break;
                    }
                }
                if(j>nof)
                    break;
                for(j=tm; j<=nom; j++)
                {
                    if((m1[j]>=fr && m1[j]<=to)||(m2[j]>=fr && m2[j]<=to)||(m1[j]<fr && m2[j]>to))
                    {
                        tm=j+1;
                        break;
                    }
                }
                if(j>nom)
                    break;
            }
            if(k>ans)
            {
                ans=k;
            }
        }
        for(i=1; i<=nof; i++)
        {
            k=0;
            fr=f1[i],to=f2[i];
            tf=i+1,tm=1;
            while(1)
            {
                for(j=tm; j<=nom; j++)
                {
                    if((m1[j]>=fr && m1[j]<=to)||(m2[j]>=fr && m2[j]<=to)||(m1[j]<fr && m2[j]>to))
                    {
                        k=k+2;
                        tm=j+1;
                        break;
                    }
                }
                if(j>nom)
                    break;
                for(j=tf; j<=nof; j++)
                {
                    if((f1[j]>=fr && f1[j]<=to)||(f2[j]>=fr && f2[j]<=to)||(f1[j]<fr && f2[j]>to))
                    {
                        tf=j+1;
                        break;
                    }
                }
                if(j>nof)
                    break;
            }
            if(k>ans)
                ans=k;
        }
        printf("%d\n",ans);
    }
}
