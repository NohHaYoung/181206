typedef struct linknd{
	int data; // ������ ���� ��� ���� 
	
	void *next; // (�Ǵ� struct linknd *next) ���� node�� ����ų ������ ��� ���� 
} linknd_t; //(typedef ��� �� struct linknd == linknd_t)


static linknd_t *list; // linknd list ��ü, ���� ���ο����� ����� ���� ����=�ٸ� ���Ͽ��� �� ������ ���� ����


