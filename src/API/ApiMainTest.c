/*
 * ApiMainTest.c
 *
 *  Created on: 2018��3��30��
 *      Author: len
 */

#include <stdio.h>
#include <pthread.h>
#include "API/H/ApiTest.h"
#include "API/H/MacroTest.h"




//���� ApiTest.c ģ�� �� constAPI ���� 
//extern void constAPI();
//extern void pointerSetGetTest();
//extern void charPointerTest();

 
void apiMainTestMain() {
	puts("apiMainTestMain ��ʼ===="); 
	constAPI();
	pointerSetGetTest();
	charPointerTest();
	charppTest();
	getWindowsPathEnvironmentParam();
	

	puts("apiMainTestMain ����====");
}


void macroTestMain() {
	puts("macroTestMain ��ʼ===="); 
	
	macroAliasName();
	getENV_ENTRY();
	
	
	
	//��һ���䶯
	puts("macroTestMain ����====");
	cArrayTestAPI();
}













