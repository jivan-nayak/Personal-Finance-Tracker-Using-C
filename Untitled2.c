#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct day *first=NULL;
int n;
float (*num) = (float*)malloc(sizeof(float)*(n));


struct day{
    struct day *link;
};

void insert_node(){
    struct day *temp;
    temp = (struct day*) malloc(sizeof(struct day));
    if(first==NULL){
        first = temp;
        first -> link = NULL;
    }

    else{
        temp ->link = first;
        first = temp;
    }
}

void add(){
    struct day *temp;
    float sum=0;
    int i;
    temp=(struct day*)malloc(sizeof(struct day));
    printf("\t\tPlease enter the expense:\n");
    scanf("%f",temp->num);
    sum+=temp->x;
    printf("You've spent %0.2f today",sum);


}

int main(){
    int i,choice=1;
    float sum=0;
    printf("do you want to enter today's expense?\n\n");
    while(choice==1){
    insert_node();
    printf("\n\t\t\tTotal number of transactions made today: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        add();
    }
    printf("\n\n\t\t\tYou'll be moving to next day");
    printf("Do you want to add the expense now? press 1 to do so else 0");
    scanf("%d",&choice);
    }
    return 0;
}
