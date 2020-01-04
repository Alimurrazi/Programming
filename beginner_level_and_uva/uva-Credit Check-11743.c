#include<stdio.h>
int dig(int n)
{
  int k=0;
  if(n==0)
    return 0;
  while(n!=0)
  {
   k=k+n%10;
   n=n/10;
  }
  return k;
}
int main()
{
 char str[25];
 int a,b,c,d,e,f,g,h,l,lf,t;
 scanf("%d%*c",&t);
 while(t--)
 {
   gets(str);
   a=(str[0]-'0')*2;
   a=dig(a);
   b=(str[2]-'0')*2;
   b=dig(b);
   c=(str[5]-'0')*2;
   c=dig(c);
   d=(str[7]-'0')*2;
   d=dig(d);
   e=(str[10]-'0')*2;
   e=dig(e);
   f=(str[12]-'0')*2;
   f=dig(f);
   g=(str[15]-'0')*2;
   g=dig(g);
   h=(str[17]-'0')*2;
   h=dig(h);
   l=a+b+c+d+e+f+g+h;
   lf=(str[1]-'0')+(str[3]-'0')+(str[6]-'0')+(str[8]-'0')+(str[11]-'0')+(str[13]-'0')+(str[16]-'0')+(str[18]-'0');
   int k=lf+l;
   if(k%10==0)
    printf("Valid\n");
   else
    printf("Invalid\n");
 }
}
