#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char *a,int len){
	int i=0,k=len-1;
	for(i=0;i<len/2;i++){
		int temp = *(a+i);
		*(a+i) = *(a+k);
		*(a+k) = temp;
		k--;
	}
}

char * itoa(int num,char *str){
	int i =0;
	int neg = 0;
	if(num < 0){
		neg = 1;
		num = -num;
	}
	while(num > 0){
		int rem = num % 10;
		str[i++] = '0' + rem;
		num/=10;
	}
	if(neg)
		str[i++] = '-';
	str[i] = '\0';
	rev(str,i); 
}

int main(){
	char *a = malloc(100);
	itoa(-152755268,a);
	printf("%s\n",a);
	return 0;
}
