#include <stdio.h>
#include <math.h>
int main(){
double dog,scoom=0,foom=0;
for(dog=1;dog<=100;dog++){
    if((dog/5)==round(foom)&&(dog/3)==round(scoom)){
    printf("FIZZBUZZ\n");
    }else if((dog/3)==round(scoom)){
    printf("FIZZ\n");
    }else if((dog/5)==round(foom)){
    printf("BUZZ\n");
    }else if((dog/5)==round(foom)&&(dog/3)==round(scoom)){
    printf("FIZZBUZZ\n");
    }
    if((dog/5)==round(foom)||(dog/3)==round(scoom)){
    }else{
    printf("%lf \n",dog);
    }
scoom = scoom + .33333333333333;
foom = foom + .20;
}
return 0;
}
