#include<stdio.h>
double temp_con(double f);
int main(){
    double f=0;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    temp_con(f);
    return 0;
}
double temp_con(double f ){
    double c;
    c= (f-32)*(5.0/9.0);
    printf("The temperature in Celsius is= %lf", c);
    return c;
}
