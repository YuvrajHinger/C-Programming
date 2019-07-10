#include<stdio.h>
void main(){
	int a[50]={0},key,i,loc;
	printf("Enter 10 Elements: ");
	for(key=0;key<10;key++) scanf("%d",&a[key]);
	printf("Enter element: ");
	scanf("%d",&key);			
	printf("Enter location: ");
	scanf("%d",&loc);			
	for(i=10;i>=loc;i--) a[i]=a[i-1];
	a[i]=key;
	printf("Array after inserting %d at loc %d: ",key,loc);
	for(i=0;i<=10;i++) printf("%d ",a[i]);
	getch();
}
