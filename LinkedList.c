typedef struct linknd{
	int data; // 데이터 저장 멤버 정의 
	
	void *next; // (또는 struct linknd *next) 다음 node를 가리킬 포인터 멤버 정의 
} linknd_t; //(typedef 사용 시 struct linknd == linknd_t)


static linknd_t *list; // linknd list 실체, 파일 내부에서만 사용할 전역 변수=다른 파일에서 이 변수에 접근 못함


