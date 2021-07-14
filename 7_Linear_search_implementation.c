#include<stdio.h>

int linearSearch(int arr[],int element,int tSize){
    for(int i=0;i<tSize;i++){
         //compare our element with index number values
         if(arr[i]==element){  //arr[0] 11==5?
           return i;
         }
    }
    return -1;
}

int main(){
    int myArray[10]={11,22,44,55,66,77,2,4,7,5};
    int element=555;
    int total_size=sizeof(myArray)/sizeof(int);
    int index=linearSearch(myArray,element,total_size);
    if(index==-1){
      printf("Your element %d is not exist in the array:",element);
    }else{
      printf("Your element %d is exist at index %d the array:",element,index);
    }

    return 0;
}
