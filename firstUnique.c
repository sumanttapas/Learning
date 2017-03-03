#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	char *arr = argv[1];
	int cc[255] = {0};
	int i = 0;
	for(i =0; i< strlen(arr); i++){
		cc[arr[i]]++;
	}
	for(i =0; i< strlen(arr); i++){
		if(cc[arr[i]] == 1){
			printf("%c",arr[i]);
		}
	}
	return 0;
}
