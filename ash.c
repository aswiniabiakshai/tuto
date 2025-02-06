#include<stdio.h>
int main(){
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    if(num%3==0 & num%5==0){
    printf("the num is divisible by both 3 and 5",num);
    }
    else{
    printf("the num is not divisible by both 3 and 5",num);
    }
    return 0;
}
