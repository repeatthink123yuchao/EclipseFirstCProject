/*
 * ApiMainTest.c
 *
 *  Created on: 2018年3月30日
 *      Author: len
 */

#include <stdio.h>
#include <pthread.h>
#include "API/H/ApiTest.h"
#include "API/H/MacroTest.h"




//引用 ApiTest.c 模块 中 constAPI 函数 
//extern void constAPI();
//extern void pointerSetGetTest();
//extern void charPointerTest();

 
void apiMainTestMain() {
	puts("apiMainTestMain 开始===="); 
	constAPI();
	pointerSetGetTest();
	charPointerTest();
	charppTest();
	getWindowsPathEnvironmentParam();
	

	puts("apiMainTestMain 结束====");
}


void macroTestMain() {
	puts("macroTestMain 开始===="); 
	
	macroAliasName();
	getENV_ENTRY();
	
	
	
	//做一个变动
	puts("macroTestMain 结束====");
	cArrayTestAPI();
}













