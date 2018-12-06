#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{
	int data; // 데이터 저장 멤버 정의 
	
	void *next; // (또는 struct linknd *next) 다음 node를 가리킬 포인터 멤버 정의 
} linknd_t; //(typedef 사용 시 struct linknd == linknd_t)


static linknd_t *list; // linknd list 실체, 파일 내부에서만 사용할 전역 변수=다른 파일에서 이 변수에 접근 못함


linknd_t *create_node(int value){
	
	linknd_t *ndPtr;
	
	/*1. 동적메모리할당(구조체의 크기 만큼) 
	2. 구조체에 입력받은 값 저장 
	3. 반환 node 포인터*/
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	
	if(ndPtr = NULL){
		printf("ERROR\n"); 
		return NULL;	
	} //메모리공간을 할당 받지 못했을 때 
	
	ndPtr->data = value;
	ndPtr->next = NULL; // linkedlist node값 초기화	
		
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
