#include<stdio.h>
void sorting(char *s){
	int i=0,j,len;
	char temp;
	len=strlen(s);		
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(s[i]<s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}		
	}	
}
void main(){	
	char a[]="creative";
	char b[]="reactive";
	sorting(&a);
	sorting(&b);
	strlwr(a); strlwr(b);
	if(!strcmp(a,b)) printf("True");
	else printf("False");
	getch();
}
