#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	scanf("%s",s);
	int freq[26]={0};
	int i=0;
	while(s[i]!='\0'){
		freq[s[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++){
		if(freq[i]>1){
			printf("%c",i+'a');
		}
	}
}
