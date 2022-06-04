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
	int sum=0;
	for(i=0;i<26;i++){
		if(freq[i] !=0){
			if(freq[i]%2==0){
				sum=sum+freq[i];
			}
		}
	}
	printf("%d",sum);
}
