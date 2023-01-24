float outflow [50];
float o;
char y,z;
char description[30][30];

 for (o=0; o<50; o++)
 {
     scanf("%f", &outflow[o]);
 }
for(y=0; y<30; y++)
{
    for(z=0; z<30; z++)
    scanf("%C", &description[y][z]);
}
return 0;


//sum of an array

int sum_of_day(int ourflow[50], int 50)
{
    int sum_of_day = 0;
    for(int i=0; i<50; i++)
    sum_of_day += outflow[i];

    return sum_of_day;
}


//income details

int income, x;
printf("enter your income");
scanf("%d", &income);
printf("would you like to set an expense limit alert?");
if(0)
{
    printf("thank you");
}
else
{

        printf("enter the limit in terms of x percentage of your salary"); //lets say user has 50,000 salary and wants an alert after 25,000 expenditure then he puts x=50
        scanf("%d", &x);

}



//alert
int alert;
alert = (x/100)*income;
for(sum_of_day<alert)
{
    sum_of_day+= outflow[50];
}
else
{
    printf("you've reached your monthly expense limit");
    sum_of_day+= outflow[50];
}

//decoration

printf("***************************************************\n");
printf("|              WELCOME TO SPREEWISE               |\n");
printf("|                                                 |\n");
printf("| YOUR INCOME : %d                                |\n",income );
printf("| YOUR ALERT LIMIT : %d percentage of your income |\n",x);
printf("| YOUR TOTAL EXPENSE YET : <ask help>             |\n",);
printf("| REMAINING BALANCE THIS MONTH :                  |\n", income-total expense);
printf("|-------------------------------------------------|\n");
printf("")
