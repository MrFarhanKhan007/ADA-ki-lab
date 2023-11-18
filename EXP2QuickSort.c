#include <stdio.h>

int main(){
    int array[9]={6,5,8,9,3,19,15,12,16};
    int size=sizeof(array)/sizeof(array[1]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
    int pivot=array[0];
    int i=0;
    int j=size-1;
    while (i<j)
    {
        while (array[i]<=pivot)
        {
            i++;
        }
        while (array[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        
    }
    int temp=array[0];
    array[0]=array[j];
    array[j]=temp;
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
}