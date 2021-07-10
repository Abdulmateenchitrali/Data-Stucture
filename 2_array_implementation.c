#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_memory;
    int *ptr;
};
void updateMyArray(struct myArray *a,int total_size,int used_memory){
   a->total_size=total_size;
   a->used_memory=used_memory;
   a->ptr=(int *)malloc(total_size*sizeof(int));
}
void display(struct myArray *a){
   for (int i = 0; i < a->used_memory; i++)
   {
       printf("%d\n",(a->ptr)[i]);
   }
   
}
void insertVal(struct myArray *a){
    int i = 0;
    int num;
    for (i; i < a->used_memory; i++)
    {
        printf("Please insert value in your array: %d\n",(i+1));
        scanf("%d",&num);
        (a->ptr)[i]=num;
    }  

}
int main(){
    struct myArray instance1;
    updateMyArray(&instance1,10,4);
    printf("Array before add values\n");
    display(&instance1);
    insertVal(&instance1);
    printf("Array after add values\n");
    display(&instance1);
    return 0;
}
