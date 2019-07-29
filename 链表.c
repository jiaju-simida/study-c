
#include<stdlib.h>
#include<stdio.h> 

typedef struct _node {
	int value;
	struct _node *next;
} Node;
typedef struct _list {
	Node * head;
	Node *tail;
}List;
void add(List* head,int number);
void print(List* pList);

int main(){
	List list;
	int number;
	list.head=NULL;
	list.tail=NULL;
	do{
		scanf("%d",&number);
		if(number != -1){
		add(&list,number);	
		}
	}while (number !=-1);
	print(&list);

	
	return 0;
}
void add(List* pList,int number)
{

	//add ro linked list
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next = NULL;
			// find the last
			Node *last = pList->tail;
			if(last){
			
			
			// attach
			last->next = p;
			pList->tail = p;
			}else{
				pList->head = p;
				pList->tail = p;
			}
}

void print(List* pList){
	Node *p;
	int i,j;
	for(p=pList->head,i=0;p;p= p->next,i++){
			
	}
	
	i--;
	for(j=i;j>=0;j--){
		for(p=pList->head,i=0;p;p= p->next,i++){
		
		if(i==j)	printf("%d ",p->value);	
		}
	}
	

}

