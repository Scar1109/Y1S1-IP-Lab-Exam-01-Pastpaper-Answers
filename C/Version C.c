#include<stdio.h>
//beginning of the main function
int main(void)
{
    //declaring variables
    int opt,num,top_opt;
    float total;
    char size,tops;
    printf("Input Pizza Option :");
    scanf("%d",&opt); //Scanning the option of Pizza
    printf("Size of the Pizza ( P/M/L) :");
    scanf(" %c",&size);//Scanning size of Pizza
    printf("Number of Pizzas :");
    scanf("%d",&num);//Scanning number of Pizza
    //calculating total cost for pizza 
    if(opt == 1 && size == 'P')
        total = 560*num;
    else if(opt == 1 && size == 'M')
        total = 920*num;
    else if(opt == 1 && size == 'L')
        total = 1800*num;
    else if(opt == 2 && size == 'P')
        total = 340*num;
    else if(opt == 2 && size == 'M')
        total = 660*num;
    else if(opt == 2 && size == 'L')
        total = 1300*num;
    else if(opt == 3 && size == 'P')
        total = 760*num;
    else if(opt == 3 && size == 'M')
        total = 1100*num;
    else if(opt == 3 && size == 'L')
        total = 2100*num;
    else
        printf("You entered incorrect!");
    //scanning need of toppings
    printf("Do you need any extra toppings ( y/n) :");
    scanf(" %c",&tops);
    //starting loop for toppings
    while(tops == 'y')
    {
        printf("Input your option :");
        scanf("%d",&top_opt);
        //adding topping cost to total
        switch(top_opt)
        {
            case 1: total = total+320*num;
                break;
            case 2: total = total+130*num;
                break;
            case 3: total = total+140*num;
                break;
            case 4: total = total+150*num;
                break;
            default: printf("You entered incorrect!");
        }
        printf("Do you need any extra toppings ( y/n) :");
        scanf(" %c",&tops);
    }
    //printing total value
    printf("Total Price Rs : %.2f",total);

}