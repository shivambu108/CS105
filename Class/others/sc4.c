#include<stdio.h>
int main(){
int number;
printf("enter choice: 1 to 9 : ");
scanf("%d", &number);
switch(number) {
case 1:
case 3:
case 5:
case 7:
case 9:printf("%d is an odd number", number);break;
case 2:
case 4:
case 6:
case 8:printf("%d is an even number\n", number);break;
default: printf("%d is a value not between or including 1 and 9.", number);

break;

}
return 0;
}