#include<stdio.h>
void main(){
	int a[50],n,max=0,cal=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);	
	for(i=0;i<n;i++){		
		if(cal==0 && a[i]>0){
			cal=a[i];
			max=a[i];
		}
		else{
			if(cal+a[i]>=0){
				cal+=a[i];
			}
		}
		if(max<cal) max=cal;		
	}
	printf("%d",max);	
}
