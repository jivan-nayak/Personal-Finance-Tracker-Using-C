#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct foleo *first=NULL;

struct foleo{
    char name[50];
    float cost,value;
    struct foleo *link;
};

void add(){
    system("color 4F");
    struct foleo *temp;
    temp=(struct foleo*)malloc(sizeof(struct foleo));
    printf("\n\n\n\t\t\tEnter the name of the stock: ");
    scanf("%s",&temp->name);
    printf("\n\t\t\tEnter the cost of the stock: ");
    scanf("\t\t\t%f",&temp->cost);
    printf("\n\t\t\tEnter the present value of the stock: ");
    scanf("\t\t\t%f",&temp->value);
    fflush(stdin);
    if(temp->cost>temp->value){
        printf("\n\t\t\tThe loss incurred is -%0.2f\%",((temp->cost-temp->value)/temp->cost)*100);
    }
    else
        printf("\n\t\t\tThe profit is %0.2f\%",((temp->value - temp->cost)/temp->cost)*100);
    if(first==NULL){
        first = temp;
        first -> link = NULL;
    }

    else{
        temp ->link = first;
        first = temp;
    }
}

void display(){
    struct foleo *temp;
	temp = first;
	while(temp!=NULL){
        if(temp->cost>temp->value){
            printf("\n\n\t\tYou had purchased %s for the cost of %0.2f, now you're at a loss of -%0.2f\%",temp->name,temp->cost,((temp->cost-temp->value)/temp->cost)*100);
        }
        else{
            printf("\n\n\t\tYou had purchased %s for the cost of %0.2f, now you're at a profit of %0.2f\%",temp->name,temp->cost,((temp->value-temp->cost)/temp->cost)*100);
		}
		temp = temp->link;
	}
}

/*void remove(){
    continue;
}*/

int main(){
    int chance=1,choice;
    system("color 4F");
    while(chance==1){
        /* printf("\n\n\t\t\tPress 1 to add more folios 2 to display the folio and 3 to delete the folio\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:add();
                   break;
            case 2:display();
                   break;
            case 3:remove();
                   break;
        }*/
        printf("Press 1 to add one more folio and 2 to display the folio: ");
        scanf("%d",&choice);
        if(choice==1)
            add();
        else
            display();
        printf("\n\t\tPress 1 to continue and 0 to exit:\n\t");
        scanf("%d",&chance);
    }
    /*display();*/
    return 0;
}
