#include<stdio.h>
#include<string.h>
#include<math.h>

char str[10];
int value;

void binary()
{
    int i,j,k,l;
    value=0;
   value=(str[0]-'0')*16+(str[1]-'0')*8+(str[2]-'0')*4+(str[3]-'0')*2+(str[4]-'0')*1;
}

int main()
{
    int i,j,k,l,m,n,key;
    char strd[50];
    char stru[50];
    char code[100000];
    gets(strd);
    gets(stru);
    while(scanf("%s",code)!=EOF)
    {
        key=27;
        l=strlen(code);
        for(i=0; i<l; i++)
        {
            k=0;
            for(j=i; j<i+5; j++)
            {
                str[k++]=code[j];
            }
            str[k]='\0';
            binary();
            if(value==27 || value==31)
            {
             key=value;
             i=i+4;
             continue;
            }
            if(key==27)
            printf("%c",strd[value]);
            else
            printf("%c",stru[value]);
            i=i+4;
        }
        printf("\n");
    }
}
