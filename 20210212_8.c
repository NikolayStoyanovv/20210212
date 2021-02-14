 /*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned uIdx=0;
    unsigned uNumOfElem=0;
    int* piValues=NULL;
    int iSum=0;
    printf("Enter number of elements");
    scanf("%u",&uNumOfElem);
    piValues=(int*)alloca(uNumOfElem*sizeof(int));
    if(NULL==piValues){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("\nAdress of iSum: %p,Pointer piValues:%p\n",&iSum,&piValues);
    printf("Elements after calloc:%d",uIdx);
    for(uIdx=0;uIdx<uNumOfElem;uIdx++){
        printf("%d",*(piValues+uIdx));
        
    }
    printf("\n");

   
   
    return 0;
}