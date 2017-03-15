#include <stdio.h>

int printPattern(int n){
	int i=0,j=0;
	for(i=0;i<n+1;i++){
		for(j=0;j<i;j++){
			printf("%d\n",i);
		}
	}
}

int main(){
	printPattern(2);
}
