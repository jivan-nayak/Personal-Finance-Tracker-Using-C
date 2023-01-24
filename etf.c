#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node *first = NULL;
int n=12;
FILE *ptr1;
char nav_name[300];
float nav[12],expens[12],retrn[12];


struct node{
	char name[30];
	float nav,expense_ratio,return1;
	struct node *link;
};

void insert_node(){
    system("color 4F");
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
    if(first==NULL){
        first = temp;
        first -> link = NULL;
    }

    else{
        temp ->link = first;
        first = temp;
    }
}

void get_name(){
    char ch, line[50];
    int i = 0;
    ptr1 = fopen("etf.name.txt","r");
    ch = getc(ptr1);
    while(ch!=EOF){
        nav_name[i] = ch;
        i++;
        ch = getc(ptr1);
    }
    printf("%s\n",nav_name);

    fclose(ptr1);
}


/*void get_nav(){
    ptr2 = fopen("etf.nav.txt","r");
    float j;
    int i;
    for(i=0;i<12;i++){
        fscanf(ptr2,"%f",&nav[i]);
    }
}
*/
void get_return(){
    float j;
    char ch;
    int i;
    ptr1=fopen("etf_return.txt","w");
    if(ptr1==NULL)
        printf("ERROR");
    else{
        for(i=0;i<12;i++){
            fscanf(ptr1,"%f",&retrn[i]);
            printf("%.2f\n",retrn[i]);
        }
    }
    ch = getc(ptr1);
    while(ch!=EOF){
        nav_name[i] = ch;
        i++;
        ch = getc(ptr1);
    }
    printf("%s",nav_name);

    fclose(ptr1);
}

void get_expense(){
    float j;
    int i;
    ptr1=fopen("etf_expense_ratio.txt","r");
    if(ptr1==NULL)
        printf("ERROR");
    else{
        for(i=0;i<12;i++){
            fscanf(ptr1,"%f",&j);
            expens[i] = j;
            printf("%.2f\n",expens[i]);
        }
    }

    fclose(ptr1);
}


/*void display(){
	struct node *temp;
	temp = first;
	while(temp!=NULL){
		printf("%s\t%f\n",temp->name,temp->nav);
		temp = temp->link;
	}

}*/


int main(){
    system("color 4F");
    int i;
    for(i=0;i<12;i++)
        insert_node();
    get_expense();
    /*get_nav();*/
    get_return();
    /*display();*/
    get_name();
    for(i=0;i<12;i++){
        printf("%.2f\t%.2f\n",expens[i],retrn[i]);
    }
    return 0;
}
