/*
 * ApiMainTest.c
 *
 *  Created on: 2018��3��30��
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 1024

void macroAliasName() {
	puts("macroAliasName ��ʼ====");
	printf("BUFFER_SIZE [%d] \n",BUFFER_SIZE);
	puts("macroAliasName ����====");
}



//δ����ʱ
#ifndef ENV_ENTRY
	//ִ��δ����
#define ENV_ENTRY "_JAVA_VERSION_SET"

#endif

void getENV_ENTRY() {
	puts("getENV_ENTRY ��ʼ====");
	printf("ENV_ENTRY [%s] \n",ENV_ENTRY);
	puts("getENV_ENTRY ����====");
}









