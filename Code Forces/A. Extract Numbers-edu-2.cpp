#include<stdio.h>
#include<string.h>

char  str[100005];
char astr[100005];
char bstr[100005];
char tstr[100005];

int main()
{
    int i,j,k,l,m,n,p;
    gets(str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        j=0,k=0,m=0;
        while(str[i])
        {
            if(str[i]=='.' || str[i]==',' || str[i]==';')
            {
                break;
            }
            tstr[j]=str[i];
            if(j==1)
            {
                if(tstr[1]=='0' && tstr[0]=='0')
                    k=1;
            }
            if((tstr[j]>='a' && tstr[j]<='z')||(tstr[j]>='A' && tstr[j]<='Z'))
            {
                k=1;
            }
            if((tstr[j]>='1' && tstr[j]<='9') && m==0)
            {
                m=1;
                if(j>0)
                {
                    k=1;
                }
            }
            i++,j++;
        }
        if(j==0)
        k=1;
        tstr[j++]='\0';
        char temp;
        if(k==0)
        {
            printf("%d\n",i+1);
            p=strlen(astr);
            if(p!=0)
            {
                astr[p++]=',';
                astr[p]='\0';
            }
            strcat(astr,tstr);
        }
        else
        {
            printf("%d\n",i+1);
            p=strlen(bstr);
            if(p!=0)
            {
                bstr[p++]=',';
                bstr[p]='\0';
            }
            strcat(bstr,tstr);
        }
    }
    char c='"';
    l=strlen(astr);
    if(l==0)
    {
        printf("-\n");
    }
    else
    {
      //  astr[l-1]='\0';
        printf("%c",c);
        printf("%s",astr);
        printf("%c\n",c);
    }
    l=strlen(bstr);
    if(l==0)
    {
        printf("-\n");
    }
    else
    {
      //  bstr[l-1]='\0';
        printf("%c",c);
        printf("%s",bstr);
        printf("%c\n",c);
    }
}
