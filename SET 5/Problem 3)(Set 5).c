#include<stdio.h>
#include<ctype.h>
void main(){
	int i=0,len,count=0;
	char a[]="ABCD";
	char b[]="DCBA";	
	len=strlen(b);	
	if(!strcmp(a,strrev(b))) printf("True");
	else printf("False");
	getch();
}
