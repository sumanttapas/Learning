#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swapBitwise(int *a,int *b){
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}


int main(){
	int a = 5,b=6;
	swap(&a,&b);
	swapBitwise(&a,&b);
	printf("a:%d b:%d",a,b);
}
