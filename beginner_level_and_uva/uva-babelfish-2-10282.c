#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dict
{
  char s1[15];
  char s2[15];
};
int comp(const void *c,const void *d)
{
  char *a=(char *)c;
  char *b=(char *)d;
  return strcmp(a,b);
}
int main()
{
  struct dict eng[100010];
 char str[150];
 char str1[15],str2[15];
 char str3[15];
 int i,j,k,l;
 char c;
 i=0,j=0;
 while(gets(str))
 {
   if(str[0]=='\0')
    break;
   sscanf(str,"%s %s",str1,str2);
   strcpy(eng[i].s2,str1);
   strcpy(eng[i].s1,str2);
   i++;
 }
 qsort(eng,i,sizeof(eng[0]),comp);
 while(scanf("%s",str3)==1)
 {
   int mid=0;
    int low=0,high=i-1;
    while (1){
		mid = (int)((low + high) / 2);
	int	cmp = strcmp(eng[mid].s1, str3);
		if (cmp == 0)
        {
			printf("%s\n",eng[mid].s2);
			break;
        }
		else if (cmp > 0)
			high = mid - 1;
		else
			low = mid + 1;
	   if(low>high)
       {
          printf("eh\n");
          break;
       }
   }
 }
 return 0;
 }
