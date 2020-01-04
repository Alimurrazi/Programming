#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[100]={"1243"};
    int l=strlen(str);
    if(next_permutation(str,str+l))
    printf("%s",str);
}
