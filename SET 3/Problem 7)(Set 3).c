#include<stdio.h>
void main(){
	int a[50],n,i,count=1,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);	
	for(i=1;i<n;i++){		
		if(a[j]==a[i]) count++;
		else count--;		
		if(count==0){
			count=1;
			j++;
		} 
	}
	count=0;
	for(i=0;i<n;i++){
		if(a[j]==a[i]) count++;
	}
	if(count>(n/2)) printf("%d",a[j]);
	else printf("NONE");
}
