#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
void print_linked_list(struct Node* node) {
	while(node!=NULL) {
		printf("%d ",node->data);
		node=node->next;
	}
	printf("\n");
}
void insert_at_begin(struct Node* node,int num) {
	struct Node* head;
	head=(struct Node*)malloc(sizeof(node));
	head->data=num;
	head->next=node;
	node=head;
	while(node!=NULL) {
		printf("%d ",node->data);
		node=node->next;
	}
	printf("\n");
}


int main(int argc,char *argv[]) {
	struct Node* node=NULL;
	for(int i=argc-1;i>=1;i--) {
		struct Node* node1;
		node1=(struct Node*)malloc(sizeof(node));
		node1->data=atoi(argv[i]);
		node1->next=node;
		node=node1;
	}
	insert_at_begin(node,6);
	print_linked_list(node);
	return 0;	
}
