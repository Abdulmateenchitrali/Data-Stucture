#include<stdio.h>
void deletAtSpecificPosition(int arr[],int index,int used_memory){
    for(int i=index;i<used_memory;i++){
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int used_memory){
    for (int i = 0; i < used_memory; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}
int main(){
    int array[10]={11,22, 33, 44, 55};
    int used_memory=5;
    int index=2;
    printf("Array element before delete\n");
    display(array, used_memory);
    deletAtSpecificPosition(array,index,used_memory);
    printf("Array element after delete\n");
    used_memory=used_memory-1;
    display(array, used_memory);
    return 0;
}
