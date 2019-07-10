#include<stdio.h>
void main(){
	int i=0,len,count=0;
	char a[50];	
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++) if((a[i]==' ' || a[i]=='	') && (a[i+1]!=' ' && a[i+1]!='	')) count++;
	printf("Total Valid Spaces are %d",count);
	getch();
}
