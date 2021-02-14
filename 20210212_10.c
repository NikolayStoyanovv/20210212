/*Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* dynamic_array(unsigned uSize){
    return malloc(sizeof(int)*uSize);
}
void dynamic_array_deinit(int* piArray){
    free(piArray);
}
int* dynamic_array_resize(int* piArray,unsigned uOldSize,unsigned uNewSize){
    int* piNewArray=dynamic_array(sizeof(int)*uNewSize);
    memcpy(piNewArray,piArray,uOldSize);
    dynamic_array_deinit(piArray);
    return piNewArray;
}

int main(void){
   int arr[12]={0};
    dynamic_array(6);
    dynamic_array_deinit(arr);
    dynamic_array_resize(arr,12,15);

    return 0;
}