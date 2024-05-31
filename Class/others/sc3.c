#include<stdio.h>
int main(){
int level;
printf("enter donation level: ");
scanf("%d", &level);
switch(level){
case 1: printf("You donated over Rs 1,000.");
case 2: printf("You donated over Rs 500.");
case 3: printf("You donated over Rs 250.");
case 4: printf("You donated over Rs 100.");

break;

default:printf("Please be a little more generous.");

break;

}
return 0;
}