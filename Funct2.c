#include<stdio.h>
#include<conio.h>

void add(int a,int b){
    printf("The addition is:%d\n",a+b);
}
void sub(int a, int b){
    printf("The subtraction is:%d\n",a-b);
}
void mul(int a, int b){
    printf("The multification is: %d\n",a*b);
}
void div(int a, int b){
    printf("The division is: %d\n",a/b);
}
int main(){
    add(10,5);
    sub(10,5);
    mul(10,5);
    div(10,5);
    getch();
}
