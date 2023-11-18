#include <stdio.h>
int INSERTIONSORT(int array[],int size){
    for (int i = 1; i < size; i++)
    {
        int temp=array[i];
        int j=i-1;
        while (j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    
}
int main(){
    int array[9]={6,5,8,9,3,19,15,12,16};
    int size=sizeof(array)/sizeof(array[1]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
    INSERTIONSORT(array,size);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
}