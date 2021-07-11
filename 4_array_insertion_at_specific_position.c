#include <stdio.h>
//array traversal O(1)
void display(int arr[], int total_size)
{
    for (int i = 0; i < total_size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int insertAtSpecificPosition(int arr[], int element, int index, int total_size, int used_memory)
{
    if (used_memory >= total_size)
    {
        return -1;
    }
    for (int i =  used_memory- 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int array[10] = {11, 22, 33, 44, 55};
    int used_memory = 5, element = 444, index = 2, total_size = 10;
    display(array, used_memory);
    int result=insertAtSpecificPosition(array,element,index,total_size,used_memory);
    if (result==1)
    {
        printf("Element %d is successfully inserted at index %d\n",element,index);
    }else{
         printf("Element %d is successfully inserted at index %d\n",element,index);
    }
    used_memory=used_memory+1;
    display(array, used_memory);
    
}
