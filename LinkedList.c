#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{
	int data; // ������ ���� ��� ���� 
	
	void *next; // (�Ǵ� struct linknd *next) ���� node�� ����ų ������ ��� ���� 
} linknd_t; //(typedef ��� �� struct linknd == linknd_t)


static linknd_t *list; // linknd list ��ü, ���� ���ο����� ����� ���� ����=�ٸ� ���Ͽ��� �� ������ ���� ����


linknd_t *create_node(int value){
	
	linknd_t *ndPtr;
	
	/*1. �����޸��Ҵ�(����ü�� ũ�� ��ŭ) 
	2. ����ü�� �Է¹��� �� ���� 
	3. ��ȯ node ������*/
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	
	if(ndPtr = NULL){
		printf("ERROR\n"); 
		return NULL;	
	} //�޸𸮰����� �Ҵ� ���� ������ �� 
	
	ndPtr->data = value;
	ndPtr->next = NULL; // linkedlist node�� �ʱ�ȭ	
		
	return ndPtr;
}


void addTail(int value){
	linknd_t *ndPtr;
	linknd_t *newPtr;
	
	if(list == NULL){
		return;
	}
	else{
		ndPtr = list;
		while(ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
	
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
}
