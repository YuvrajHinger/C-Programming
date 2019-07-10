#include<stdio.h>
void main(){
	int a[50]={0},b[10]={0},i,j;
	printf("Array ");
	for(i=0;i<5;i++) scanf("%d",&a[i]);	
	for(i=0;i<5;i++){
		while(a[i]>0){
			j=a[i]%10;
			a[i]/=10;
			b[j]++;	
		}			
	}	
	i=9; j=b[i];
	while(i>=0){		
		if(j>0){
			printf("%d",i);		
			j--;
		}
		else{
			i--;
			j=b[i];
		} 		
	}	
	getch();
}
