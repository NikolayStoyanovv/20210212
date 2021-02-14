/*Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения.*/
#include<stdio.h>
double result=1;
int main(){
    double x;
    int y;
    

    printf("Please enter a value of x:");
    scanf("%lf",&x);
    printf("Please enter a value of y:");
    scanf("%d",&y);
    if(y>0){
        for(int i=0;i<y;++i){
            result=result*x;
           
        }
        printf("The result is:%lf\n",result);
    }

    else if(y==0){
        result=1;
       printf("The result is:%lf",result);
    }
    else if(y<0){
         for(int i=y;i<0;i++){
            result=result/(result/result*x);
        }
        printf("The result is:%lf\n",result);
    }
    return 0;
}