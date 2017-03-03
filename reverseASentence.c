#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(char *a, int start, int end){
	int i=0;
	for(i=start;i<end;i++){
		printf("%c",a[i]);
	}
	printf(" ");
}

int main(){
	char a[11] = "I am Sumant";
	int i,count =0,j=0,k=0;
	for(i = 0;i<strlen(a);i++){
		if(a[i] == ' '){
			count++;
		}
	}

	int arr[count];
	for(i =0;i<strlen(a);i++){
		if(a[i]==' '){
			arr[j] = i;
			j++;
		}
	}
	
	for(i=0;i<count;i++){
		if(i==0){
			print(a,arr[count-i-1]+1,strlen(a));
		}
		else{
			print(a,arr[count - i-1]+1,arr[count - i]);
		}
	}
	print(a,0,arr[0]);
}
