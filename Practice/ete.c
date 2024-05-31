// #include <stdio.h>

// typedef struct {
//     int amount;
//     char data[10];
//     int talktime;
//     int validity;
//     int sms;
// } Plan;

// Plan airtel[] = {
//     {100, "500 MB", 100, 60, 100},
//     {300, "1.2 GB", 200, 98, 200},
//     {500, "2 GB", 300, 180, 300},
//     {800, "3 GB", 400, 250, 400}
// };

// Plan vodafone[] = {
//     {100, "450 MB", 110, 64, 100},
//     {300, "1.3 GB", 210, 100, 200},
//     {500, "2.2 GB", 330, 185, 300},
//     {800, "3.5 GB", 410, 253, 400}
// };

// void print_plan(Plan plan) {
//     printf("Your SIM has been successfully recharged with amount Rs.%d. You will get the following facilities:\n", plan.amount);
//     printf("Data per Day: %s\n", plan.data);
//     printf("Talk time (in Minutes): %d\n", plan.talktime);
//     printf("Validity (in Days): %d\n", plan.validity);
//     printf("SMS (per Day): %d\n", plan.sms);
// }

// int main() {
//     int provider;
//     int amount;
//     printf("Enter Service Provider (1 for Airtel, 2 for Vodafone): ");
//     scanf("%d", &provider);
//     printf("Enter Recharge Amount: ");
//     scanf("%d", &amount);

//     Plan *company;
//     int size;
//     if (provider == 1) {
//         company = airtel;
//         size = sizeof(airtel) / sizeof(Plan);
//     } else if (provider == 2) {
//         company = vodafone;
//         size = sizeof(vodafone) / sizeof(Plan);
//     } else {
//         printf("Invalid Service Provider\n");
//         return 0;
//     }

//     for (int i = 0; i < size; i++) {
//         if (company[i].amount == amount) {
//             print_plan(company[i]);
//             return 0;
//         }
//     }

//     printf("Invalid Recharge Amount\n");
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int (*ptr)(int) = fun;
//     (*ptr)(3);

//     return 0;

// }

// int fun(int n) {
//   for(;n > 0; n--)
// printf("IIITDWD");

// return 0;

// }
// #include<stdio.h>
// int main() {
// char *ptr;
// char myString[]="IIITDHARWAD";

// ptr=myString;

// ptr+=4;

// printf("%s", ptr);

// return 0;

// }

#include <stdio.h>

int main() {

int i=32 ;

for (;i;i>>=1)

printf ("G");

return 0;

}