/*Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char**names;
    char **age;
    int n,i,a;
    printf("Enter number of volunteers: ");
    scanf("%d",&n);
    names=(char**)calloc(n, sizeof(char*));
    age=(char**)calloc(n, sizeof(char*));   //memory allocated using calloc
    if(names == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
      printf("Enter elements of array:\n");
      for(i=0;i<n;++i)
      {
       printf("Name %d :\n",i+1);
       names[i]=(char*)calloc(16,sizeof(char));
       fgets(names[i],20,stdin);
      }
      printf("\n");
      for( a=0;a<n;++a){
          printf("The age of volunteer:%d\n",a+1);
           age[a]=(char*)calloc(16,sizeof(char));
          fgets(age[a],20,stdin);
      }

      printf("Elements of array are\n");
      for(i=0;i<n;i++)
      {
        printf("Name:%s",*(names+i));
      }
       for(int a=0;a<n;++a){
         printf("The age of volunteer:%d:%s\n",a+1,*(age+a));
          
      }
    }
    return 0;
}