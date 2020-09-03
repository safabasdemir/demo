#include<stdio.h>

int sum(int a, int b);

int main(){
    int a = sum(3,4);
    printf("%d",a);
}

int sum(int a, int b){
    return a+b;
}