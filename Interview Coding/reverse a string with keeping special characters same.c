#include<stdio.h>
#include<string.h>
void main(){
	char *s;
	
	s=(char*)malloc(sizeof(char)*10);
	scanf("%s",s);
	int i;
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]>=65){
			printf("%c",s[i]);
		}
	}
	printf("%d -> %s",strlen(s),s);
	
}
