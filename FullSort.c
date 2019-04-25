#include<stdio.h>

//局部静态变量虽然生存周期是整个程序周期，但是作用域只能是当前局部函数
/*全排列 II

给定一个可包含重复数字的序列，返回所有不重复的全排列。

示例:

输入: [1,1,2]
输出:
[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]
*/

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