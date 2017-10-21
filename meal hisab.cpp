/*
  sojib 1*11*1**  500+280
  tomal **111111  400
  rana  11**        0
  redoy 11111111  650

*/
#include<stdio.h>
#include<map>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    char str[500];
    char str1[500];
    map< string, double  > ara;
    string nam;
    map< string, double > ara1;
    map< int, string >serial;
    int i,j,k,n;
    double l,mmeal,mtaka,mealr,taka,m,khoroj,bazar;
    mmeal=0,mtaka=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        cin>>nam;
        serial[i]=nam;
        ara[nam]=0;
        ara1[nam]=0;
        scanf("%s",str);
        //    printf("%s\n",str);
        j=0;
        k=1;
        while(str[j])
        {
            if(k==3)
                k=0;
            if(str[j]!='*')
            {
                l=str[j]-'0';
                //       printf("k==%d\n",k);
                if(k==2)
                {
                    ara[nam]=ara[nam]+0.5*l;
                }
                else
                    ara[nam]=ara[nam]+l;
            }
            k++;
            j++;
        }
        mmeal=mmeal+ara[nam];
        scanf("%s",str1);
        j=0,m=0;
        while(str1[j])
        {
         if(str1[j]=='+')
         {
         ara1[nam]=ara1[nam]+m;
         m=0;
         j++;
         continue;
         }
         m=m*10+(str1[j]-'0');
         j++;
        }
        ara1[nam]=ara1[nam]+m;
        mtaka=mtaka+ara1[nam];
       // cout<<nam;
      //  printf(" %lf %lf\n",ara[nam],ara1[nam]);
    }
    printf("\n");
  //  printf("%lf %lf\n",mmeal,mtaka);
    mealr=mtaka/mmeal;
    printf("Meal rate %lf\n\n",mealr);
    for(i=0;i<n;i++)
    {
    nam=serial[i];
  //  cout<<nam;
    khoroj=ara[nam]*mealr;
    bazar=ara1[nam];
    m=bazar-khoroj;
     cout<<nam;
    printf(" khoroj=%lf bazar=%lf\n",khoroj,bazar);
    if(m<0)
    {
     m=m*(-1);
     printf(" dive %lf Taka\n",m);
    }
    else
     printf(" pave %lf Taka\n",m);
  //  printf(" %lf %lf\n",ara[nam],ara1[nam]);
    }
}
