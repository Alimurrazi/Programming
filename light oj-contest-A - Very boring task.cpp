#include<stdio.h>
#include<string.h>

char str[1000];
char str1[1000][1000];

int main()
{
    int i,j,k,l;
    while(gets(str))
    {
        k=0,j=0;
        for(i=0; ; i++)
        {
            if(str[i]=='\0')
            {
                str1[k][j]='\0';
                break;
            }
            if(str[i]==' ' || str[i]=='.')
            {
                if(j!=0)
                {
                    str1[k][j]='\0';
                    k++;
                    j=0;
                }
                continue;
            }
            str1[k][j++]=str[i];
        }
/*
        for(i=0; i<=k; i++)
        {
            printf("%d %s\n",i,str1[i]);
        }
*/
        if(strcmp(str1[0],str1[3])==0)
        {
            if(strcmp(str1[1],"or")==0)
            {
                if(strcmp(str1[2],"not")==0)
                    printf("Law Of The Excluded Middle\n");
            }
        }

     else  if(strcmp(str1[0],str1[4])==0)
        {
            if(strcmp(str1[2],str1[6])==0)
            {
                if(strcmp(str1[1],"or")==0)
                {
                    if(strcmp(str1[3],"Not")==0)
                    {
                        if(strcmp(str1[5],"Therefore,")==0)
                            printf("Denying The Disjunct\n");
                    }
                }
            }
        }

      else if(strcmp(str1[1],str1[4])==0)
        {
            if(strcmp(str1[3],str1[6])==0)
            {
                if(strcmp(str1[0],"If")==0)
                {
                    if(strcmp(str1[2],"then")==0)
                    {
                        if(strcmp(str1[5],"Therefore,")==0)
                        {
                            printf("Affirming The Precedent\n");
                        }
                    }
                }
            }
        }

     else if(strcmp(str1[1],str1[8])==0)
        {
            if(strcmp(str1[3],str1[5])==0)
            {
                if(strcmp(str1[0],"If")==0)
                {
                    if(strcmp(str1[2],"then")==0)
                    {
                        if(strcmp(str1[4],"Not")==0)
                        {
                            if(strcmp(str1[6],"Therefore,")==0)
                            {
                                if(strcmp(str1[7],"Not")==0)
                                {
                                    printf("Denying The Consequent\n");
                                }
                            }
                        }
                    }
                }

            }
        }
        else
        {
          printf("Not added yet\n");
        }

    }
}
