#include "app.h"

int main(void)
{
    welcomeMsg();

    char choice;

    bool quit = false;

    while(!quit)
    {
        printf("Enter the programme tip(t) or quit(q): ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'q' : {
                quit = true;
                printf("\nThank you!\n");
                break;
            }
            case 't' : {
                printf("\n\n");
                tipCalc();
                break;
            }
            default : {
                printf("Invalid Input\n");
                break;
            }
        }
    }
}