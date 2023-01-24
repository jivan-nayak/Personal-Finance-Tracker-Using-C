#include<stdio.h>
#include<stdlib.h>

struct node *first = NULL;
int n=12;
FILE *ptr1,*ptr2,*ptr3,*ptr4;

struct node{
	char name[30];
	float nav,expense_ratio,return1;
	struct node *link;
};

void insert_node(){
    int i;
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	for(i=0;i<n;i++){

		if(first==NULL){
			first = temp;
			first -> link = temp;
			fscanf(ptr1,"%[^\n]",first->name);
			fscanf(ptr2,"%[^\n]",&first->nav);
			fscanf(ptr3,"%[^\n]",&first->expense_ratio);
			fscanf(ptr4,"%[^\n]",&first->return1);
		}

		else{
			temp ->link = first;
			first = temp;
			fscanf(ptr1,"\%[^\n]",first->name);
			fscanf(ptr2,"\%[^\n]",&first->nav);
			fscanf(ptr3,"\%[^\n]",&first->expense_ratio);
			fscanf(ptr4,"\%[^\n]",&first->return1);
		}
	}
}

void display(){
	struct node *temp;
	temp = first;
	while(temp!=NULL){
		printf("%s",temp->name);
	}

}

int main(){
	ptr1 = fopen("etf.name.txt","r");
	ptr2 = fopen("etf.nav.txt","r");
	ptr3 = fopen("etf.expense.ratio.txt","r");
	ptr4 = fopen("etf.return.txt","r");
	int n=12;
	insert_node;
	display();
}
