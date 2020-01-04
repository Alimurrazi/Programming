#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
    {
    char str[1000];
    int i,j,k,l,m,n,p=0,s1,m1,h1,temp,s2,m2,h2;
    FILE *fb;
    fb=fopen("subt.str","w");
    while(gets(str))
    {
    l=strlen(str);

    if(p==0)
    {
    n=0;
    if(l<5)
    {
    for(i=0;i<l;i++)
    n=n*10+(str[i]-'0');
    if(n>0)
    {
    fprintf(fb,str);
    fprintf(fb,"\n");
   // printf("%s\n",str);
    continue;
    }
    }

    temp=0;
    s1=(str[6]-'0')*10+str[7]-'0';
    if(s1<25)
    {
    s1=s1+60;
    temp=1;
    }
    s1=s1-25;

    m1=(str[3]-'0')*10+str[4]-'0';
    if(m1<temp)
    {
    m1=m1+60;
    m1=m1-temp;
    temp=1;
    }
    else
    {
    m1=m1-temp;
    temp=0;
    }

    h1=(str[0]-'0')*10+str[1]-'0';
    h1=h1-temp;

    temp=0;
    s2=(str[23]-'0')*10+str[24]-'0';
    if(s2<25)
    {
    s2=s2+60;
    temp=1;
    }
    s2=s2-25;

    m2=(str[20]-'0')*10+str[21]-'0';
    if(m2<temp)
    {
    m2=m2+60;
    m2=m2-temp;
    temp=1;
    }
    else
    {
    m2=m2-temp;
    temp=0;
    }

    h2=(str[17]-'0')*10+str[18]-'0';
    h2=h2-temp;
   // printf("%d %d %d %d %d %d\n",h1,m1,s1,h2,m2,s2);


    {
    str[0]=(h1/10)+'0';
    str[1]=(h1%10)+'0';
    }

    {
    str[3]=(m1/10)+'0';
    str[4]=(m1%10)+'0';
    }

    {
    str[6]=(s1/10)+'0';
    str[7]=(s1%10)+'0';
    }

    {
    str[17]=(h2/10)+'0';
    str[18]=(h2%10)+'0';
    }

    {
    str[20]=(m2/10)+'0';
    str[21]=(m2%10)+'0';
    }

    {
    str[23]=(s2/10)+'0';
    str[24]=(s2%10)+'0';
    }
    fprintf(fb,str);
    fprintf(fb,"\n");
   // printf("%s\n",str);
    p=1;
    continue;
    }
    if(str[0]=='\0')
    {
    p=0;
    fprintf(fb,"\n");
    continue;
    }
    fprintf(fb,str);
    fprintf(fb,"\n");
  //  fprintf(fb,'\n');
   // printf("%s\n",str);
    }
    fclose(fb);
    }
