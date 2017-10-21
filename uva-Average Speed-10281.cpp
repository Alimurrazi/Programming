#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,j,k,l,h1,h2,m1,m2,s1,s2,speed,h,m,s,temp,speed1;
    double average,distance=0,average1;
    int flag=0;
    average1=average;
    while(gets(str))
    {
        l=strlen(str);
        if(l>8)
        {
            if(flag==0)
            {
            h1=(str[0]-'0')*10+str[1]-'0';
            m1=(str[3]-'0')*10+str[4]-'0';
            s1=(str[6]-'0')*10+str[7]-'0';
            }
            i=9;
            speed=0;
            while(str[i])
            {
                speed=speed*10+(str[i]-'0');
                i++;
            }
            average=(speed*1.0)/3600;
        if(flag==0)
        {
        flag=1;
        average1=average;
        continue;
        }
        }

        {
            h2=(str[0]-'0')*10+str[1]-'0';
            m2=(str[3]-'0')*10+str[4]-'0';
            s2=(str[6]-'0')*10+str[7]-'0';
        }
        temp=0;
        if(s2<s1)
        {
            s2=s2+60;
            temp=1;
        }
        s=s2-s1;

        m1=m1+temp;
        if(temp==1)
        {
         s2=s2-60;
         m1=m1-temp;
        }
        temp=0;
        if(m2<m1)
        {
            m2=m2+60;
            temp=1;
        }
        m=m2-m1;
        h1=h1+temp;
        if(temp==1)
        {
            m2=m2-60;
            h1=h1-temp;
        }
        temp=0;
        h=h2-h1;
        temp=0;

        if(l>8)
        {
        distance=distance+(h*3600*average1+m*60*average1+s*average1);
        average1=average;
        }
        else
        {
         printf("average==%.2lf\n",average);
         printf("%d %d %d %d %d %d\n",h1,m1,s1,h2,m2,s2);
        distance=distance+(h*3600*average+m*60*average+s*average);
        }
    //    if(l==8)
        printf("%.2lf\n",distance);
        h1=h2,m1=m2,s1=s2;
        //  printf("%d %d %d\n",h,m,s);
    }
}
