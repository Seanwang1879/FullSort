#include<stdio.h>

//局部静态变量虽然生存周期是整个程序周期，但是作用域只能是当前局部函数

#define MAX_LENGTH    100

void FullSort(char *list)
{
	if(list == NULL){
		return ;
	}

	int i;
	int length = 0;
	int *TmpList;
	
	TmpList = list;

	while((TmpList++)!=NULL){
		length++;
	}
	
	list++;
	for(i=0; i<length; i++){
		if(length == 1){
			printf("%c\n", *list);
		}else{
			printf("%c", *list);
		}

		FullSort(list);
	}
	
	return ;
}

void main(void argc, void *args[])
{
	int i;
	char list[MAX_LENGTH];
	
	for(i=0; i<MAX_LENGTH; i++){
		scanf("%c", &(list++));
	}
	
	FullSort(list);
	
	return ;
}
