#include<stdio.h>
#include<ctype.h>
void main(){
	int i=0,len,count=0;
	char a[50];	
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++){
		switch(tolower(a[i])){
			case 'a': a[i]='1'; count++;
			break;
			case 'e': a[i]='2'; count++;
			break;
			case 'i': a[i]='3'; count++;
			break;
			case 'o': a[i]='4'; count++;
			break;
			case 'u': a[i]='5'; count++;
			break;
		}
	} 
	printf("Total Vowels are %d\n",count);
	puts(a);
	getch();
}
