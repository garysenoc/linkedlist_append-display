#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* root = NULL;


void display(){
	struct node* p = NULL;
		p = root;
	while(p !=NULL){
		printf("data: %d || address: %x\n",p->data,p->link);
		p = p->link;
	}
}

void append(int n){
	int i;
	struct node* temp = NULL;
	
	for(i=0;i<n;i++){
		temp = (struct node*) malloc(sizeof(struct node));
		printf("Enter Node %d: ",i+1);
		scanf("%d",&(temp->data));
		temp->link = NULL;
	
		if(root == NULL)
			root = temp;
		else{
			struct node* p;
			p = root;
		while(p->link !=NULL)
			p = p->link;
			p->link = temp;
		}
	}
	display();
}

int main(){
	int n;
	
	printf("How many nodes do you want to enter: ");
	scanf("%d",&n);
	append(n);
	
	return 0;
}
