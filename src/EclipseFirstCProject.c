#include <stdio.h>
#include <stdlib.h>

/**
 * 
 */
void pointerAPITest() {
	puts("pointerAPITest ��ʼ====");

	puts("pointerAPITest ����====");
}

void pointerAPITest2() {
	puts("pointerAPITest2 ��ʼ====");

	puts("pointerAPITest2 ����====");
}




//���� �����ļ��еĺ���
extern void apiMainTestMain();
extern void macroTestMain();

int main(void) {
	puts("�ڳ� Hello C Project");
	pointerAPITest();
	apiMainTestMain();
//	int a=5;
//	printf("a��ֵ %d \n",a);
	
	//�궨�����
	macroTestMain(); 
	return 0;
}
