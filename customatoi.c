#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int catoi(char a[]){
	int i=0,ret=0,neg=0;
	if(a[0]=='-'){
		neg=1;
		i=1;
	}
	while(i<strlen(a)){
		ret = (ret*10) + a[i]-'0';
		i++;
	}
	return neg?-ret:ret;
}

int main(){
	char a[] = "-1234567";
	printf("%d\n",catoi(a));
}
