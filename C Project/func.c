#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "header.h"

void main()
{
    float amountDeposited = .0;
    menu(amountDeposited);



}

void menu(float amountDeposited)
{
    char input = 0;
    char password[20];
    int passcheck;
    do {

        printf("\n\n**********************************\n\n");
        printf("    Total Amount Deposited: $");
        printf("%.2f", amountDeposited);
        printf("\n    Input your choice\n");
        printf("    [1] Insert Money\n");
        printf("    [2] View Selections\n");
        printf("    [3] Add items to inventory (Password Protected) \n");
        printf("    [4] Return change \n");
        printf("    [Z] To exit program \n");
        printf("    --- ");

        scanf(" %c", &input);

        switch (input)
        {
        case '1':
            amountDeposited = insertMoney(amountDeposited);
            break;
        case '2':
            amountDeposited = transaction(amountDeposited);
            break;
        case '3':
            printf("Enter the required password:  ");
            scanf(" %16s",&password);
            printf("%s\n", password);
            passcheck = strcmp(password, "pass");
            if (passcheck == 0)
            {
                updateItems();
            }
            else
            {
                printf("Incorrect password");
            }
            break;
        case '4':
            //printf("Returning change\n");
            returnChange(amountDeposited);
            amountDeposited = 0;
            break;
        default:
            printf("\n\n\tINVALID INPUT");
            break;
        }
    } while (input != 'Z');

}

float insertMoney(float amountDeposited)
{

    char input = '0';

    printf("Input 'Z' to exit menu\n");

    do
    {
        printf("Designate inserted coin. ---");
        scanf(" %c", &input);

        switch (input)
        {
        case 'D':
            amountDeposited = amountDeposited + .10;
            printf("    Total Amount Deposited: $");
            printf("%.2f", amountDeposited);
            printf("\n");
            break;
        case 'Q':
            amountDeposited = amountDeposited + .25;
            printf("    Total Amount Deposited: $");
            printf("%.2f", amountDeposited);
            printf("\n");
            break;
        case 'N':
            amountDeposited = amountDeposited + .05;
            printf("    Total Amount Deposited: $");
            printf("%.2f", amountDeposited);
            printf("\n");
            break;
        case 'P':
            amountDeposited = amountDeposited + .01;
            printf("    Total Amount Deposited: $");
            printf("%.2f", amountDeposited);
            printf("\n");
            break;
        case 'Z': 
            printf("Returning to menu...\n");
            return amountDeposited;
            break;
        default:
            printf("Invalid value eneterd. ('Z' is to return to menu)\n");
            break;
        }
    } while (1);

    

}


float transaction(float amountDeposited)
{
    
    char input = 0;

    do
    {
        printf("\n\n**********************************\n\n");
        printf("    Amounted deposited: -- $%.2f", amountDeposited);
        printf(" -- \n    [1]%s", snack1.name);
        printf(" - %.2f", snack1.price);
        printf(" - QTY:%i\n", snack1.quantity);
        
        printf("    [2]%s", snack2.name);
        printf(" - %.2f", snack2.price);
        printf(" - QTY:%i\n", snack2.quantity);

        printf("    [3]%s", snack3.name);
        printf(" - %.2f", snack3.price);
        printf(" - QTY:%i\n", snack3.quantity);

        printf("    [4]%s", snack4.name);
        printf(" - %.2f", snack4.price);
        printf(" - QTY:%i\n", snack4.quantity);

        printf("    [Z] To return to menu \n");
        printf("    --- ");
        scanf(" %c", &input);

        switch (input)
        {
        case '1':
            if (snack1.quantity < 0)
            {
                printf("This item is out of stock");
                break;
            }
            else if(snack1.price > amountDeposited)
            {
                printf("Not enough funs for this item\n");
                printf("Please deposit an additional $%.2f",
                    amountDeposited - snack1.price);
                break;

            }
            else
            {
                printf("\nPlease confirm your order [Y]/[N]:   ");
                scanf(" %c", &input); 
                if (input == 'Y')
                {
                    amountDeposited = amountDeposited - snack1.price;
                    snack1.quantity--;
                    printf("\n ********Item dispensed******");
                }
                else
                {
                    printf("*******Canceling order********");
                }                   
            }
            break;
        case '2':
            if (snack2.quantity < 0)
            {
                printf("This item is out of stock");
                break;
            }
            else if (snack2.price > amountDeposited)
            {
                printf("Not enough funs for this item\n");
                printf("Please deposit an additional $%.2f",
                    amountDeposited - snack2.price);
                break;

            }
            {
                printf("\nPlease confirm your order [Y]/[N]:  ");
                scanf(" %c", &input);
                if (input == 'Y')
                {
                    amountDeposited = amountDeposited - snack2.price;
                    snack2.quantity--;
                    printf("\n ********Item dispensed******");
                }
                else
                {
                    printf("*******Canceling order********");
                }
            }
            break;
        case '3':
            if (snack3.quantity < 0)
            {
                printf("This item is out of stock");
                break;
            }
            else if (snack3.price > amountDeposited)
            {
                printf("Not enough funs for this item\n");
                printf("Please deposit an additional $%.2f",
                    amountDeposited - snack3.price);
                break;
            }
            else
            {
                printf("\nPlease confirm your order [Y]/[N]:  ");
                scanf(" %c", &input);
                if (input == 'Y')
                {
                    amountDeposited = amountDeposited - snack3.price;
                    snack3.quantity--;
                    printf("\n ********Item dispensed******");
                }
                else
                {
                    printf("*******Canceling order********");
                }
            }
            break;
        case '4':
            if (snack4.quantity < 0)
            {
                printf("This item is out of stock");
                break;
            }
            else if (snack4.price > amountDeposited)
            {
                printf("Not enough funs for this item\n");
                printf("Please deposit an additional $%.2f",
                    amountDeposited - snack4.price);
                break;
            }
            else
            {
                printf("\nPlease confirm your order [Y]/[N]:  ");
                scanf(" %c", &input);
                if (input == 'Y')
                {
                    amountDeposited = amountDeposited - snack4.price;
                    snack4.quantity--;
                    printf("\n ********Item dispensed******");
                }
                else
                {
                    printf("*******Canceling order********");
                }
            }
            break;
        case 'Z':
            printf("Returning to menu...\n");
            return 0;
        default:
            printf("Invalid value eneterd. ('Z' is to return to menu)\n");
            break;
        }
    } while (1);
    
}

void updateItems()
{
    do
    {
    char input = 0;
    int qtyUpdate = 0;

        printf("\n\n**********************************\n\n");
        printf("\n    [1]%s", snack1.name);
        printf(" - %.2f", snack1.price);
        printf(" - QTY:%i\n", snack1.quantity);

        printf("    [2]%s", snack2.name);
        printf(" - %.2f", snack2.price);
        printf(" - QTY:%i\n", snack2.quantity);

        printf("    [3]%s", snack3.name);
        printf(" - %.2f", snack3.price);
        printf(" - QTY:%i\n", snack3.quantity);

        printf("    [4]%s", snack4.name);
        printf(" - %.2f", snack4.price);
        printf(" - QTY:%i\n", snack4.quantity);

        printf("    [Z] To return to menu \n");
        printf("    --- ");
        scanf(" %c", &input);

        switch (input)
        {
        case '1':
            printf("Please input updated number of \n%s", snack1.name);
            scanf(" %i", &qtyUpdate);
            snack1.quantity = qtyUpdate;
            break;
        case '2':
            printf("Please input updated number of \n%s", snack2.name);
            scanf(" %i", &qtyUpdate);
            snack2.quantity = qtyUpdate;
            break;
        case '3':
            printf("Please input updated number of \n%s", snack3.name);
            scanf(" %i", &qtyUpdate);
            snack3.quantity = qtyUpdate;
            break;
        case '4':
            printf("Please input updated number of \n%s", snack4.name);
            scanf(" %i", &qtyUpdate);
            snack4.quantity = qtyUpdate;
            break;
        case 'Z':
            printf("Returning to menu...\n");
            return;
        default:
            printf("Invalid value eneterd. ('Z' is to return to menu)\n");
            break;
        }
    } while (1);
}

void returnChange(float amountDeposited)
{
    int counter = 0;
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    float refund = amountDeposited;

    while (amountDeposited > 0.0)
    {
        if (amountDeposited >= .25)
        {
            amountDeposited = amountDeposited - .25;

            quarter++;
            
        }
        else if (amountDeposited >= .10)
        {
            amountDeposited = amountDeposited - .10;
            dime++;
        }
        else if (amountDeposited >= .05)
        {
            amountDeposited = amountDeposited - .05;
            nickel++;
        }
        else if (amountDeposited >= .01)
        {
            amountDeposited = amountDeposited - .01;
            penny++;
        }
    }
    printf("Refunding a toal of $%.2f", refund);
    printf("\n Ejecting %i", quarter);
    printf(" quarter(s) -- %i", dime);
    printf(" dime(s) --  %i", nickel);
    printf(" nickel(s) -- %i", penny);
    printf(" penny(ies) --");

}