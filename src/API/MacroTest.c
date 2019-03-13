/*
 * ApiMainTest.c
 *
 *  Created on: 2018年3月30日
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 1024

void macroAliasName() {
	puts("macroAliasName 开始====");
	printf("BUFFER_SIZE [%d] \n",BUFFER_SIZE);
	puts("macroAliasName 结束====");
}



//未定义时
#ifndef ENV_ENTRY
	//执行未定义
#define ENV_ENTRY "_JAVA_VERSION_SET"

#endif

void getENV_ENTRY() {
	puts("getENV_ENTRY 开始====");
	printf("ENV_ENTRY [%s] \n",ENV_ENTRY);
	puts("getENV_ENTRY 结束====");
}









