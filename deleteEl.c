#include<stdio.h>

void main(){
	int ar[10] = {12, 23, 45, 56, 23, 2};
	int ars = sizeof(ar)/sizeof(ar[0]);
	printf("[");
	for(int i=0;i<ars;i++)
		printf("%d, ", ar[i]);
	printf("]");
	int i, pos;
	printf("\nEnter the element to delete > ");
	scanf("%d", &pos);
	for(int i=pos-1; i<ars-1; i++){
		ar[i] = ar[i+1];
	}
        printf("[");  
        for(int i=0;i<ars;i++)
                printf("%d, ", ar[i]);
        printf("]");
}
