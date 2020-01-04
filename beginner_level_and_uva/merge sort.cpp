#include<stdio.h>
#define MAX 50

void mergeSort(int arr[],int low,int mid,int high){
    printf("k\n");
    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){
         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }
/*
    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
*/
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

void partition(int arr[],int low,int high){

    int mid;
    printf("low=%d high=%d\n",low,high);
    if(low<high)
    {
        mid=(low+high)/2;
     printf("if low=%d mid=%d high=%d\n",low,mid,high);
         partition(arr,low,mid);
     printf("if again low=%d mid=%d high=%d\n",low,mid,high);
         partition(arr,mid+1,high);
     printf("if after low=%d mid=%d high=%d\n",low,mid,high);
         mergeSort(arr,low,mid,high);
    }
}

int main(){

    int merge[MAX],i,n;

    printf("Enter the total number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements which to be sort: ");
    for(i=0;i<n;i++){
         scanf("%d",&merge[i]);
    }

    partition(merge,0,n-1);

    printf("After merge sorting elements are: ");
    for(i=0;i<n;i++){
         printf("%d ",merge[i]);
    }

   return 0;
}
//Sample output:

//Enter the total number of elements: 5
//Enter the elements which to be sort: 2 5 0 9 1
//After merge sorting elements are: 0 1 2 5 9

