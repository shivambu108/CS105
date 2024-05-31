//2. Write C program to find the area of the following: Triangle, Square,  Rectangle
// and Circle. Implement the C program for all possible inputs appropriate message. 

#include <stdio.h>
#include <math.h>

#define PI 3.141592

void print_error() {
    printf("Invalid input. Please enter positive values only.\n");
}

double get_positive_value() {
    double value;
    if(scanf("%lf", &value) != 1 || value <= 0){
        print_error();
        return -1;
    }
    return value;
}

int main(){
    int choice;
    double base, height, a, b, c, s, degree, angle, side, length, width, radius, area;

    printf("Choose the shape to find the area:\n");
    printf("1. Triangle\n2. Square\n3. Rectangle\n4. Circle\n");

    printf("Enter your choice (1-4): ");
    if(scanf("%d", &choice) != 1){
        print_error();
        return 1;
    }

    switch (choice){
        case 1: {
            int t;
            printf("\n1. Area with base and height\n2. Area with Heron's formula\n3. Area with two sides and included angle");
            printf("\nEnter your choice (1-3): ");
            if(scanf("%d", &t) != 1){
                print_error();
                return 1;
            }
    
            switch(t) {
                case 1:
                    printf("Enter base and height: ");
                    base = get_positive_value();
                    height = get_positive_value();
                    if(base == -1 || height == -1) return 1;
                    area = 0.5 * base * height;
                    printf("Area with base and height: %.2lf\n", area);
                    break;
                case 2:
                    printf("Enter lengths of all three sides: ");
                    a = get_positive_value();
                    b = get_positive_value();
                    c = get_positive_value();
                    if(a == -1 || b == -1 || c == -1) return 1;
                    s = (a + b + c) / 2;
                    area = sqrt(s * (s - a) * (s - b) * (s - c));
                    printf("Area with Heron's formula: %.2lf\n", area);
                    break;
                case 3:
                    printf("Enter lengths of two sides and included angle in degrees: ");
                    a = get_positive_value();
                    b = get_positive_value();
                    degree = get_positive_value();
                    if(a == -1 || b == -1 || degree == -1) return 1;
                    angle = degree * (PI / 180.0);
                    area = 0.5 * a * b * sin(angle);
                    printf("Area with two sides and included angle: %.2lf\n", area);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }    
        }
        break;
        case 2:
            printf("Enter the side of the square: ");
            side = get_positive_value();
            if(side == -1) return 1;
            area = side * side;
            printf("The area of the square is %.2lf\n", area);
            break;
        case 3:
            printf("Enter the length and width of the rectangle: ");
            length = get_positive_value();
            width = get_positive_value();
            if(length == -1 || width == -1) return 1;
            area = length * width;
            printf("The area of the rectangle is %.2lf\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle in cm: ");
            radius = get_positive_value();
            if(radius == -1) return 1;
            area = PI * radius * radius;
            printf("The area of the circle is %.2lf sq cm\n", area);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}





/*
#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(){
    int choice;
    double base, height, a, b, c, s, degree, angle, side, length, width, radius, area;

    printf("Choose the shape to find the area:\n");
    printf("1. Triangle\n2. Square\n3. Rectangle\n4. Circle\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice){
        case 1: {
             int t;
            printf("\n1. Area with base and height\n2. Area with Heron's formula\n3. Area with two sides and included angle");
            printf("\nEnter your choice (1-3): ");
            scanf("%d", &t);
    
                switch(t) {
                    printf("Enter positive lengths only!!\n");
                    case 1:
                        printf("Enter base and height: ");
                        scanf("%lf %lf", &base, &height);
                        area = 0.5 * base * height;
                        printf("Area with base and height: %.2lf\n", area);
                        break;
                    case 2:
                        printf("Enter lengths of all three sides: ");
                        scanf("%lf %lf %lf", &a, &b, &c);
                        s = (a + b + c) / 2;
                        area = sqrt(s * (s - a) * (s - b) * (s - c));
                        printf("Area with Heron's formula: %.2lf\n", area);
                        break;
                    case 3:
                        printf("Enter lengths of two sides and included angle in degrees: ");
                        scanf("%lf %lf %lf", &a, &b, &degree);
                        angle = degree * (PI / 180.0);
                        area = 0.5 * a * b * sin(angle);
                        printf("Area with two sides and included angle: %.2lf\n", area);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                    }    
            }
            break;
        case 2:
            printf("Enter the side of the square: ");
            scanf("%lf", &side);

            if (side > 0){
                area = side * side;
                printf("The area of the square is %.2lf\n", area);
            }
            else{
                printf("Invalid input. The side must be positive.\n");
            }
            break;
        case 3:
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);

            if (length > 0 && width > 0){
                area = length * width;
                printf("The area of the rectangle is %.2lf\n", area);
            }
            else{
                printf("Invalid input. The length and width must be positive.\n");
            }
            break;
        case 4:
            printf("Enter the radius of the circle in cm: ");
            scanf("%lf", &radius);

            if (radius > 0){
                area = PI * radius * radius;
                printf("The area of the circle is %.2lf sq cm\n", area);
            }
            else{
                printf("Invalid input. The radius must be positive.\n");
            }
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            
    }
    
    return 0;
}
*/