#include "app.h"

void welcomeMsg()
{
    printf("\n\t***************************************************\n");
    printf("\t**     Calculates the tip                        **\n");
    printf("\t** Format: Takes the total amount                **\n");
    printf("\t**         Takes the tip percent                 **\n");
    printf("\t**         Takes number of people                **\n");
    printf("\t** Result: Gives out total amount (including tip)**\n");
    printf("\t**         Gives out amount divided among people **\n");
}

void tipCalc()
{
    double percent;
    double bill;
    int numofPeople;
    printf("Enter bill: ");
    scanf("%lf", &bill);
    printf("Enter tip percent: ");
    scanf("%lf", &percent);
    printf("Total Number of people: ");
    scanf("%d", &numofPeople);

    double tipAmt = bill * (percent / 100);
    double total = bill + tipAmt;
    double eachperson = total / numofPeople;

    printf("Total Bill: %.2lf\n", total);
    printf("Tip Charged : %.2lf\n", tipAmt);
    printf("Bill Charged to each person : %.2lf\n", eachperson);

    printf("\n\n");
}