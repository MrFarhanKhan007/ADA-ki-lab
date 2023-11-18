#include <stdio.h>

int SELECTIONSORT(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        int min=i;
        for (int j = i+1; j < size; j++)
        {
            if (array[j]<array[min])
            {
                min=j;
            }
            
        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    
}
int main(){
    int array[9]={6,5,8,9,3,19,15,12,16};
    int size=sizeof(array)/sizeof(array[1]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
    SELECTIONSORT(array,size);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ," ,array[i]);
    }
}

// Selection sort using recursion
// #include <stdio.h>
