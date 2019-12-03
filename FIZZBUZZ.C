#include <stdio.h>
int main(){
int dog;
for(dog=1;dog<=100;dog++){
    if((dog % 15)==0){
        printf("FIZZBUZZ\n");
    }else if((dog % 3)==0){
        printf("FIZZ\n");
    }else if((dog % 5)==0){
        printf("BUZZ\n");
    }else{
        printf("%d \n",dog);
    }
}
return 0;
}
