#include<stdio.h>
//array traversal O(1)
void display(int arr[],int total_size){
    for (int i = 0; i < total_size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int main(){
    int array[10]={11,22,33,44,55};
    int used_memory=5;
    display(array,used_memory);

}
