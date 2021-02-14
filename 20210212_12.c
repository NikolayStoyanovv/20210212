/*Задача 12.
Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{char**names;
int i,j,n;
char s[100];
printf("Enter number of volunteers \n");
scanf("%d",&n);
names=(char**)calloc(n, sizeof(char*));
if(names == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else{printf("Enter volunteers in any order\n");
    for(i=0;i<n;i++){
        names[i]=(char*)calloc(16,sizeof(char));
        fgets(names[i],20,stdin);
}


    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }
  
        }

    }
}

printf("\nThe sorted order of volunteers is:\n");
for(i=0;i<n;i++)
{
 printf("%s\n",names[i]);
}

}