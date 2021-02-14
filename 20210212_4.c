/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
 
    // if memory cannot be allocated
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
  
    // deallocating the memory
    free(ptr);

    return 0;
}