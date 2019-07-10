#include<stdio.h>
void main(){
	int a[10],key,i;
	printf("Enter 10 elements: ");
	for(key=0;key<10;key++) scanf("%d",&a[key]);
	printf("Enter element to be searched: ");
	scanf("%d",&key);
	for(i=0;i<10;i++) if(a[i]==key) break;
	printf(" Element %d found at loc: %d",key,i+1);
	getch();
}
