/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *piValue=NULL;
    unsigned uSize=0;

    printf("Please enter size:");
    scanf("%u",&uSize);
    piValue=(int*)malloc(uSize*sizeof(int));
    if(NULL==piValue){
        printf("\nAllocation memory error\n");
        exit(1);
    }
    printf("Please enter a new size:\n");
    scanf("%u",&uSize);
    piValue=realloc(piValue,uSize*2);
     if(NULL==piValue){
        printf("\nReallocation memory error\n");
        exit(2);
    }
    printf("Addresses of reallocated memory:%p\n",piValue);
    free(piValue);
    return 0;
}