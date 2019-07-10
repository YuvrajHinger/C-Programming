#include<stdio.h>
void main(){	
	int a[5]={10,3,5,6,2},total=1,j=0,i=0;
	while(i!=5){
		if(j==5){
			printf("%d ",total);
			j=0;
			total=1;
			i++;
		}
		else{
			if(i!=j) total*=a[j];			
			j++;
		}
	}	
	getch();
}



