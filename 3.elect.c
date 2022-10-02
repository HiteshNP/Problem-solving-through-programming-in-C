/* An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 units 90 paise per unit:beyond 300 units rupees 1 per unit. All users are charged a minimum of rupees 100 as meter charge.If the total amount is more than Rs 400,then an additional Surcharge of 15% of total amount is charged. Write a program to read the name of the user, number of units consumed and print out the charges.*/
#include<stdio.h>
int main()
{
    int units;
    float amt;
    char name[10];
    printf("Enter the number of units consumed\n");
    scanf("%d",&units);
    printf("Enter the name of the customers\n");
    scanf("%s",name);  // scanf("%c",&name[i]);
    if(units<0)
    {
        printf("units consumed cannot be negative\n");
        return 0;
    }
    if(units>=0 && units<=200)   
        amt= 100+0.80*units;
    else if(units > 200 && units <= 300)  
            amt= 100+(0.80 * 200)+(units-200)*0.90;
         else
            amt= 100+(0.80 * 200)+(0.90 * 100)+(units-300)*1.00;
    if(amt>400)
    {
             amt= amt+0.15*amt;
     }   
    printf("The customer name is %s\n units consumed is %d \n total amount = %.2f\n",name,units,amt);
    return 0;
}
