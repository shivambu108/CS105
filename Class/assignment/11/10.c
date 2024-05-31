//10. Write functions to convert feet to inches, convert inches to centimeters, and convert centimeters to meters. 
//Write a program that prompts a user for a measurement in feet and converts and outputs this value in meters. 
//Facts to use: 1 ft = 12 inches, 1 inch = 2.54 cm, 100 cm = 1 meter.
#include <stdio.h>

double feet_to_inches(double feet) {
    return feet * 12;
}

double inches_to_cm(double inches) {
    return inches * 2.54;
}

double cm_to_meters(double cm) {
    return cm / 100;
}

int main() {
    double feet;
    printf("Enter a measurement in feet: ");
    scanf("%lf", &feet);
    double inches = feet_to_inches(feet);
    double cm = inches_to_cm(inches);
    double meters = cm_to_meters(cm);
    printf("The measurement in meters is: %.2lf\n", meters);
    return 0;
}
