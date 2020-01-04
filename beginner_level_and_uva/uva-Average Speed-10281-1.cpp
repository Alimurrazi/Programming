#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[100];
    int i,j,k,l,n,h1=0,h2=0,m1=0,m2=0,s1=0,s2=0,h=0,m=0,s=0,fh,fm,fs,temp,ts,tm,th,time;
    double faverage=0,saverage,sum,speed=0,distance;
    bool check=false;
    while(gets(str))
    {
        speed=0,temp=0;
        l=strlen(str);

        if(l>8)
        {
            i=9;
            while(str[i])
            {
                speed=(speed*10)+str[i]-'0';
                i++;
            }
            saverage=(speed)/3600;
        }
        //  printf("%lf %lf\n",speed,saverage);

        h=(str[0]-'0')*10+str[1]-'0';
        m=(str[3]-'0')*10+str[4]-'0';
        s=(str[6]-'0')*10+str[7]-'0';


        if(check==false && l>8)
        {
            distance=0;
            faverage=saverage;
            h1=h;
            m1=m;
            s1=s;
            check=true;
            continue;
        }
        /*
        printf("<------->\n");
        printf("h=%d m=%d s=%d\n",h,m,s);
        printf("h1=%d m1=%d s1=%d\n",h1,m1,s1);
        printf("<-------->\n");
        */
        if(s<s1)
        {
            fs=(s+60)-s1;;
            temp=1;
        }
        else
            fs=s-s1;

        if(m<(m1+temp))
        {
            fm=(m+60)-(m1+temp);
            temp=1;
        }
        else
        {
            fm=m-(m1+temp);
            temp=0;
        }

        fh=h-(h1+temp);
        temp=0;

        h1=h,m1=m,s1=s;
        /*
        printf("<------>\n");
        printf("fh=%d fm=%d fs=%d\n",fh,fm,fs);
        printf("<------>\n");
        */
        time=fh*3600+fm*60+fs;
        distance=distance+time*faverage;

        if(l==8)
        {
            if(h<10)
            printf("0%d:",h);
            if(h>=10)
            printf("%d:",h);
            if(m<10)
            printf("0%d:",m);
            if(m>=10)
            printf("%d:",m);
            if(s<10)
            printf("0%d",s);
            if(s>=10)
            printf("%d",s);
            printf(" %.2lf km\n",distance);
        }
        else
            faverage=saverage;
    }
}
