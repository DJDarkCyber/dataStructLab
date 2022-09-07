// Array Implementaion
#include<stdio.h>

void display();
void insert();
void delEl();
void search();
void create();

#define maxsize 10
int list[maxsize], n;

void main(){
	int choice;
	do{
		printf("\n\tSelect an array implementing option\n");
		printf("\t\t1. Create \n");
		printf("\t\t2. Insert \n");
		printf("\t\t3. Delete \n");
		printf("\t\t4. Display \n");
		printf("\t\t5. Search \n");
		printf("\t\t6. Exit \n");
		printf("> ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				delEl();
				break;
			case 4:
				display();
				break;
			case 5:
				search();
				break;
			case 6:
				return;
			default:
				printf("Invalid choice detected");
		}
	}while(1);
}

void display(){
	printf("[");
	for(int i=0; i<maxsize; i++){
		printf("%d, ", list[i]);
	}
	printf("]");
}

void insert(){
	int usrPos, usrEl;
	printf("\nEnter the element to insert > ");
	scanf("%d", &usrEl);
	printf("\nEnter the position to insert > ");
	scanf("%d", &usrPos);
	for(int i=maxsize; i>usrPos-1; i--){
		list[i+1] = list[i];
	}
	list[usrPos] = usrEl;
}

void delEl(){
	int usrPos;
	printf("\nEnter the position of the element to be deleted > ");
	scanf("%d", &usrPos);
	for(int i=usrPos; i<maxsize; i++){
		if(list[i] == 0){
			return;
		}else{
		list[i] = list[i+1];
		}
	}
}

void search(){
	int usrEl;
	int flag = 0;
	printf("\nEnter the element to search > ");
	scanf("%d", &usrEl);
	for(int i=0; i<maxsize; i++){
		if(list[i] == usrEl){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		printf("\nElement found in the array!");
	}else{
		printf("\nElement not found in the array!");
	}
}

void create(){
	int usrMax;
	printf("\nEnter the number of elements to get (below 10) > ");
	scanf("%d", &usrMax);
	if(usrMax > 10 || usrMax <= 1){
		printf("\nC\'mon dont try to crash this code\n");
		return;
	}
	for(int i=0; i<usrMax; i++){
		printf("%d > ", i+1);
		scanf("%d", &list[i]);
	}
	return;

}
