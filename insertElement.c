#include<stdio.h>



void main(){
	int a[100] = {10, 20, 12, 23, 4, 1, 45};
	int sizeofar = sizeof(a)/sizeof(a[0]);
	printf("[");
	for(int i=0; i<sizeofar; i++)
		printf("%d, ", a[i]);
	printf("]\n");
	int usrPos, usrEl, temp;
	printf("Enter the Element to insert > ");
	scanf("%d", &usrEl);
	printf("Enter the position to insert > ");
	scanf("%d", &usrPos);
	for(int i=sizeofar; i>usrPos-1; i--)
		a[i+1] = a[i];
	a[usrPos] = usrEl;
	sizeofar = sizeof(a)/sizeof(a[0]);
        printf("[");
        for(int i=0; i<sizeofar; i++)
                printf("%d, ", a[i]);
        printf("]\n");


}
