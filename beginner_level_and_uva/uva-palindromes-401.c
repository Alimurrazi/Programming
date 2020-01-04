#include<stdio.h>
#include<string.h>
int main()
{
  char str[25];
  int i,j,l,l1,mid,p,q;
  while(scanf("%s",str)!=EOF)
  {
   l1=strlen(str);
   mid=l1/2;
   p=1,q=1;
   for(i=0,j=l1-1;i<mid;i++,j--)
   {
     if(str[i]!=str[j])
       {
           p=0;
           break;
       }
   }
    if(i==mid)
    p=1;
   i=-1;
    if(str[mid]=='B'||str[mid]=='C'||str[mid]=='D'||str[mid]=='F'||str[mid]=='G'||str[mid]=='K'||str[mid]=='N'||str[mid]=='P'||str[mid]=='Q'||str[mid]=='R'||str[mid]=='4'||str[mid]=='6'||str[mid]=='7'||str[mid]=='9')
            {
              q=0;
            }
     if(str[mid]>='a' && str[mid]<='z')
            q=0;
      if(q==1)
      {
    for(i=0,j=l1-1;i<mid;i++,j--)
    {
                if(str[i]=='A' && str[j]=='A')
            continue;
           else if(str[i]=='E' && str[j]=='3')
            continue;
           else if(str[i]=='H' && str[j]=='H')
            continue;
           else if(str[i]=='I' && str[j]=='I')
            continue;
           else if(str[i]=='J' && str[j]=='L')
            continue;
           else if(str[i]=='L' && str[j]=='J')
            continue;
          else  if(str[i]=='M' && str[j]=='M')
            continue;
           else if(str[i]=='O' && str[j]=='O')
            continue;
          else if(str[i]=='S' && str[j]=='2')
            continue;
           else if(str[i]=='T' && str[j]=='T')
            continue;
           else if(str[i]=='U' && str[j]=='U')
            continue;
           else if(str[i]=='V' && str[j]=='V')
            continue;
           else if(str[i]=='W' && str[j]=='W')
            continue;
           else if(str[i]=='X' && str[j]=='X')
            continue;
           else if(str[i]=='Y' && str[j]=='Y')
            continue;
           else if(str[i]=='Z' && str[j]=='5')
            continue;
           else if(str[i]=='1' && str[j]=='1')
            continue;
           else if(str[i]=='2' && str[j]=='S')
            continue;
          else if(str[i]=='3' && str[j]=='E')
            continue;
           else if(str[i]=='5' && str[j]=='Z')
            continue;
           else if(str[i]=='8' && str[j]=='8')
            continue;
           else
           {
            q=0;
             break;
           }
    }
    }
    if(i==mid)
     q=1;
    if(p==0 && q==0)
      printf("%s -- is not a palindrome.\n\n",str);
    else if(p==1 && q==0)
      printf("%s -- is a regular palindrome.\n\n",str);
    else if(p==0 && q==1)
      printf("%s -- is a mirrored string.\n\n",str);
    else if(p==1 && q==1)
      printf("%s -- is a mirrored palindrome.\n\n",str);
  }
  return 0;
}
