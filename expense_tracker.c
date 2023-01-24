#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct node *first=NULL;

typedef struct node
{
    char details[200];
    int fn;
    struct node * link;
};

void details(){
    int i;
    struct node *temp;
    for(i=0;i<3;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        if(first==NULL){
            first = temp;
            first -> link = NULL;
        }
        else{
            temp ->link = first;
            first = temp;
        }
    }
    char dt1[] = "Name = Kolkata-Banglore  Rating = 4.5  Duration = 2.5 hrs Price = Rs 7000";
    int fn1 = 001;
    strcpy(temp->details, dt1);
    temp->fn = fn1;
    temp = temp->link;
    char dt2[] = "Name = Patna-Banglore  Rating = 4.5  Duration = 2.5 hrs Price = Rs 7000";
    int fn2 = 002;
    strcpy(temp->details, dt2);
    temp->fn = fn2;
    temp = temp->link;
    char dt3[] = "Name = Chennai-Pune  Rating = 4.5  Duration = 2.5 hrs Price = Rs 7000";
    int fn3 = 003;
    strcpy(temp->details, dt3);
    temp->fn = fn3;
    temp = temp->link;
    char dt4[] = "Name = Jaipur-Banglore  Rating = 4.5  Duration = 2.5 hrs Price = Rs 7000";
    int fn4 = 004;
    strcpy(temp->details, dt4);
    temp->fn = fn4;
    temp->link = NULL;
}

void display()
{
    struct node *temp;
    temp = first;
    while(temp!=NULL)
    {
        printf("%s,%d\n\n",temp->details,temp->fn);
        temp = temp->link;
    }
}

/*void booking(int a)
{
    struct node * temp;
    switch(a)
    {
        case 001 :
            printf("%s", &temp->details);
            break;

        case 002 :
            printf("%s", temp->details);
            break;

        case 003 :
            printf("%s", temp->details);
            break;

        case 004 :
            printf("%s", temp->details);
            break;

        default :
            printf("No such Flight available");
    }
}*/

/*void booking(int a)
{
    struct node * temp;
    int c = 0;
    temp = first;
    while(temp!=NULL)
    {
        if(temp->fn == a)
        {
            printf("%s", temp->details);
            c = 1;
        }
        temp = temp->link;
    }
    if(c == 0)
    {
        printf("No flight Available");
    }
}*/

int main()
{
    int user_fn = 0;
    details();
    display();
    /*printf("Enter the flight no.");
    //scanf("%d",user_fn);
    //booking(user_fn);*/
    return 0;
}
