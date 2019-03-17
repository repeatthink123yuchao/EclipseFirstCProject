#include <stdio.h>
#include <stdlib.h>

/**
 * 
 */
void pointerAPITest() {
	puts("pointerAPITest 开始====");

	puts("pointerAPITest 结束====");
}



//引入 其他文件中的函数
extern void apiMainTestMain();
extern void macroTestMain();

int main(void) {
	puts("于超 Hello C Project");
	pointerAPITest();
	apiMainTestMain();
//	int a=5;
//	printf("a的值 %d \n",a);
	
	//宏定义测试
	macroTestMain(); 
	return 0;
}
