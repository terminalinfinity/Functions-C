#include<stdio.h>

double calpower(double base, double exp){
    double result = 1;
    for(int i=1;i<=exp;i++){
        result = result * base;
    }
    printf("%1.lf\n",result);
}

int main(){
    double base,exp,result;
    printf("base: ");
    scanf("%lf",&base);
    printf("exponent: ");
    scanf("%lf",&exp);

    result = pow(base,exp);
    printf("%.1lf",result);

    getch();
}
