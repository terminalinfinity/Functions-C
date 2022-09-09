#include<stdio.h>
double triangle(double b, double h);
int main(){
    double b,h;
    printf("Enter your base: ");
    scanf("%lf",&b);
    printf("Enter your height: ");
    scanf("%lf",&h);

    double area = triangle(b,h);
    printf("Area is: %.2lf\n",area);

    getch();
}

double triangle(double b, double h){
    return 0.5 * b * h;
}
