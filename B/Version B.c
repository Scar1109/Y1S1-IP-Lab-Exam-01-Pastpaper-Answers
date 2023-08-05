#include<stdio.h>
int main(void)
{
    //declaring variables 
    int r_Opt,num_G,num_D,a_Opt;
    float total;
    char add_Tour;
    printf("Input Room Option :");
    scanf("%d",&r_Opt);
    printf("Number of guests :");
    scanf("%d",&num_G);
    printf("Number of Days :");
    scanf("%d",&num_D);
    if(r_Opt == 1)
        {
            if(num_G<=2 && num_G>0)
                total = 45000.0*num_G*num_D;
            else if(num_G<=5)
                total = 44000.0*num_G*num_D;
            else if(num_G>5)
                total = 43000.0*num_G*num_D;
            else
                printf("You entered incorrect!");
        }
        else if(r_Opt == 2)
        {
            if(num_G<=2 && num_G>0)
                total = 45000.0*num_G*num_D;
            else if(num_G<=5)
                total = 44000.0*num_G*num_D;
            else if(num_G>5)
                total = 43000.0*num_G*num_D;
            else
                printf("You entered incorrect!");
        }
        else if(r_Opt == 3)
        {
            if(num_G<=2 && num_G>0)
                total = 45000.0*num_G*num_D;
            else if(num_G<=5)
                total = 44000.0*num_G*num_D;
            else if(num_G>5)
                total = 43000.0*num_G*num_D;
            else
                printf("You entered incorrect!");
        }
        else
        {
            printf("You entered incorrect!");
        }
    printf("Do you need any additional tours ( y/n) :");
    scanf(" %c",&add_Tour);
    while (add_Tour == 'y')
    {
        printf("Input your option :");
        scanf("%d",&a_Opt);
            if(a_Opt==1)
                total = total + 3500.0*num_G;
            else if(a_Opt==2)
                total = total + 1000.0*num_G;
            else if(a_Opt==3)
                total = total + 1500.0*num_G;
            else if(a_Opt==4)
                total = total + 2000.0*num_G;
            else
                printf("You entered incorrect!");
        printf("Do you need any additional tours ( y/n) :");
        scanf(" %c",&add_Tour);
    }
    printf("Total Price : %.2f",total);
    return 0;
}