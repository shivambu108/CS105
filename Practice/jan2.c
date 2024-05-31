#include <stdio.h>
#include <string.h>
struct tariff
{
    int netg;
    int amount;
    char package[150];
};
int main()
{
    struct tariff airtel[4], vodafone[4];
    // airtel - recharge amount = 100rs
    airtel[0].netg = 4;
    airtel[0].amount = 100;
    strcpy(airtel[0].package, "Data per Day:500MB,Talk time(in Minutes):100,Validity(in Days):60,SMS(per Day):100");
    // airtel - recharge amount = 300rs
    airtel[1].netg = 4;
    airtel[1].amount = 300;
    strcpy(airtel[1].package, "Data per Day:1.2GB,Talk time(in Minutes):200,Validity(in Days):98,SMS(per Day):200");
    // airtel - recharge amount = 500rs
    // airtel - recharge amount = 500rs
    airtel[2].netg = 4;
    airtel[2].amount = 500;
    strcpy(airtel[2].package, "Data per Day:2GB,Talk time(in Minutes):300,Validity(in Days):180,SMS(per Day):300");
    // airtel - recharge amount = 800rs
    airtel[3].netg = 4;
    airtel[3].amount = 800;
    strcpy(airtel[3].package, "Data per Day:3GB,Talk time(in Minutes):400,Validity(in Days):250,SMS(per Day):400");
    // vodafone - recharge amount = 100rs
    vodafone[0].netg = 4;
    vodafone[0].amount = 100;
    strcpy(vodafone[0].package, "Data per Day:450MB,Talk time(in Minutes):110,Validity(in Days):64,SMS(per Day):100");
    // vodafone - recharge amount = 300rs
    vodafone[1].netg = 4;
    vodafone[1].amount = 300;
    strcpy(vodafone[1].package, "Data per Day:1.3GB,Talk time(in Minutes):210,Validity(in Days):100,SMS(per Day):200");
    // vodafone - recharge amount = 500rs
    vodafone[2].netg = 4;
    vodafone[2].amount = 500;
    strcpy(vodafone[2].package, "Data per Day:2.2GB,Talk time(in Minutes):330,Validity(in Days):185,SMS(per Day):300");
    // vodafone - recharge amount = 800rs
    vodafone[3].netg = 4;
    vodafone[3].amount = 800;
    strcpy(vodafone[3].package, "Data per Day:3.5GB,Talk time(in Minutes):410,Validity(in Days):253,SMS(per Day):400");
    int ch, amnt, index;
    printf("Hello, Welcome! \nPlease select the service provider: 1. Airtel, 2. Vodafone : ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("You have selected Airtel service. Enter the recharge amount: ");
        scanf("%d", &amnt);
        switch (amnt)
        {
        case 100:
            index = 0;
            break;
        case 300:
            index = 1;
            break;
        case 500:
            index = 2;
            break;
        case 800:
            index = 3;
            break;
        default:
            printf("Sorry! Airtel do not have any tarrif plan for this amount");
            return 0;
        }
        printf("Your SIM has been successfully recharged with amount Rs.%d", amnt);
        printf("\nYou will get the following facilities: %s", airtel[index].package);
    }
    else if (ch == 2)
    {
        printf("You have selected Vodafone service. Enter the recharge amount: ");
        scanf("%d", &amnt);
        switch (amnt)
        {
        case 100:
            index = 0;
            break;
        case 300:
            index = 1;
            break;
        case 500:
            index = 2;
            break;
        case 800:
            index = 3;
            break;
        default:
            printf("Sorry! Vodafone do not have any tarrif plan for this amount");
            return 0;
        }
        printf("Your SIM has been successfully recharged with amount Rs.%d", amnt);
        printf("\nYou will get the following facilities: %s", vodafone[index].package);
    }
    else
        printf("Sorry! invalid choice, try again");
    return 0;
}