#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

void fair_value_module();
void sip_module();
void folio_track();

void sip_module(){
    system("color 4F");
    int age1, age2, value1, value2, fv, n, i;
    float sip, rate[] = {0.08, 0.1, 0.12}, inter;
    printf("\n\n\t\tEnter your present age: ");
    scanf("%d",&age1);
    printf("\n\t\tEnter the age by which you want to retire: ");
    scanf("%d",&age2);
    n = age2 - age1;
    printf("\n\t\tEnter your current net worth: ");
    scanf("%d",&value1);
    printf("\n\t\tEnter the net worth you desire: ");
    scanf("%d",&value2);
    if(value2<value1|age2<age1){
        printf("\n\n\t\tPlease set your goals better !\n\n");
    }
    else{
        fv = value2 - value1;
        for(i=0;i<3;i++){
            inter = pow((1+rate[i]), n);
            sip = ((rate[i] * fv) / (inter - 1) * (rate[i] + 1))/12;
            printf("\n\t\tYou will have to invest Rs. %.2f per month at a rate of %.2f to reach your target by the age of %d",sip,rate[i],age2);
        }

    }


}

void fair_value_module(){
    int a=1;
}

void indices_module(){
    int a=1;
}

int main(){
    system("color 4F");
    int chance=1, choice;

    while(chance==1){

        printf("\n\n\t\tHello User, how may I help you?\n\n\n");
        printf("\t\tPress 1 to know how much you need to invest to reach your desired goal/ achieve financial independence\n");
        printf("\t\tPress 2 to know the fair valuation of stock\n\t\tPress 3 to know the volatility of the indices:  ");
        scanf("%d",&choice);

        switch(choice){
            case 1:  sip_module();
                    break;
            case 2:  fair_value_module();
                    break;
            case 3:  indices_module();
                    break;
            default:printf("Invalid input");
        }

        printf("\n\n\t\tPress 1 to continue\n\t\tPress 0 to exit");
        scanf("%d",&chance);
    }

    return 0;
}




