#include <stdio.h>

int BINARYSEARCH(int array[],int size,int key,int low,int high){
    int mid=(low+high)/2;
    if (low>high)
    {
        return -1;
    }
    if (array[mid]==key)
    {
        return mid;
    }
    else if (array[mid]>key)
    {
        return BINARYSEARCH(array,size,key,low,mid-1);
    }
    else
    {
        return BINARYSEARCH(array,size,key,mid+1,high);
    }
}

 int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(array)/sizeof(array[1]);
    int key=5;
    int low=0;
    int high=size-1;
    int result=BINARYSEARCH(array,size,key,low,high);
    printf("%d",result);

    return 0;
 }