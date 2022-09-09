#include<stdio.h>

int square(int a){
    return a*a;
}
int main(){
    int num;
    printf("Enter any Integer: ");
    scanf("%d",&num);

    int result = square(num);
    printf("Square is: %d\n",result);

    getch();
}
