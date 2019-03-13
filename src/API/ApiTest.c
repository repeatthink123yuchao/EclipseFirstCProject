/*
 * ApiMainTest.c
 *
 *  Created on: 2018年3月30日
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>

void constAPI() {
	puts("constAPI 开始====");
	/*
	 * 修饰变量
	 */
	const int a=5;
/*
	 a 的值 0028FEFC
	a [5]
	a [5] &a [0028FEFC]
*/
	printf(" a 的值 %p \n",&a);
	printf("a [%d] \n",a);
	printf("a [%d] &a [%p] \n",a,&a);
	
	/**
	 * char* 和 char[] 没什么区别 
	 * 
	 */
	char* hand="双手反绑在身后";
	char chars[]="字符数组";
/*
	hand [双手反绑在身后] chars [字符数组]
	*(&hand) [双手反绑在身后] *(&chars) [字符数组]
	&hand [0028FEF8] &chars [0028FEEF]
*/

	printf("hand [%s] chars [%s] \n",hand,chars);
	printf("*(&hand) [%s] *(&chars) [%s] \n",*(&hand),*(&chars));
	printf("&hand [%p] &chars [%p] \n",&hand,&chars);
	puts("constAPI 结束====");
}


void pointerSetGetTest() {
	puts("pointerSetGetTest 开始====");
	int a=10;
	/*
	 * a		地址的值
	 * &a	 	地址的值 的 物理地址 
	 * *(&a)	物理地址 存储的值 
	 */
	printf("a [%d] 10 [%d] &a [%p] *(&a) [%d] \n",a,10,&a,*(&a));
	//* 即 标记是指针变量
	int* p;
	p=&a;
	/*
	 * 指针变量p的物理地址: &p
	 * 指针变量p的物理地址 存放的数据: p 或 *(&p) 或 &a
	 * 指针变量p指向的地址 的 值: a 或 *p 或 **(&p)  或 *(&a) 
	 */
	printf("&p [%p] \n",&p);
	printf("p [%p] *(&p) [%p] &a [%p] \n",p,*(&p),&a);
	printf("a [%d] *p [%d] **(&p) [%d] *(&a)  [%d] \n",a,*p,**(&p),*(&a));
	
	puts("pointerSetGetTest 结束====");
}


void charPointerTest() {
	puts("charPointerTest 开始====");
/*
	cp [0028FEFB]  c [c]
	&cp [0028FEFC]  &c [0028FEFB]
	*(&cp) [0028FEFB] **(&cp) [c] *(&c) [c]
	ca [abcd]
	ca [0028FEEF]
	&ca [0028FEEF]
	*(&ca) [abcd]
	ca[0] [a]
	&(ca[0]) [0028FEEF]
	*&(ca[0]) [a]
	&cpa [0028FEF4] cpa [0028FEEF]
	cpa [0028FEEF] cpa [abcd]
	*(&cpa) [abcd]
	*(&cpa) [0028FEEF]
*/

	/*
	 * 1 字符指针
	 * 2 字符串指针
	 * 3 数组首地址 : 数组名 与 数组第一个元素的地址
	 */
	char* cp;
	char c='c';
	//指针赋值
	cp=&c;
	//值访问 指针的变量标识是一个地址 [两者等价]  非指针变量的标识是一个常量数据 [两者等价]  
	printf("cp [%p]  c [%c] \n",cp,c);
	//址访问 指针变量标识 的 地址 , 非指针变量的标识 的 地址 
	printf("&cp [%p]  &c [%p] \n",&cp,&c);
	//通过 地址 访问 地址的址值
	printf("*(&cp) [%p] **(&cp) [%c] *(&c) [%c] \n",*(&cp),**(&cp),*(&c));
	
	/*
	 * 字符数组
	 * 1 数组名 即 首地址
	 * 2 数组 的 第一个元素 的地址 也是 数组的首地址
	 */
	char* cpa;
	char ca[]="abcd";
	//指针赋值 cpa=ca;  或 cpa=&ca; 或 cpa=&(ca[0])
	cpa=ca;
	/*
	 * 关于 下面数组的总结
	 * 必须%p输出			 		必须%s输出
	 * 地址							址值
	 * ca								ca
	 * 									备注1 : 以 %p 输出 ca 时输出的是 数组的物理地址
	 * 									备注2 : 以 %s 输出 ca 时输出的是 数组的物理地址 存放的 数组的值
	 * 									备注3 : 以 %p 输出 ca 的值 同 '以%p输出 &ca 的值是相同的'
	 * 									备注4 : 以 %s 打印 *ca 时程序会报错	
	 * &ca							*(&ca)
	 * 									备注1 : &ca 与 ca 以 %p 打印时 打印出来的值 两者是相同的
	 * 									备注2 : 以 %s 打印 *ca 时程序会报错
	 * 									备注3 : 以 %s 打印 *(&ca) 时 打印的是  数组的物理地址 存放的 数组的值
	 * 									备注4 : 
	 * &(ca[0])						*(&(ca[0]))
	 * 									备注1 : 以 %p 打印 ca &ca &(ca[0]) 时,三者打印的值是一样的
	 * 									备注2 : 以 %s 打印 *(&(ca[0])) 时 程序就会报错
	 * 									备注3 : 以 %c 打印 *($(ca[0]) 时 程序输出的是 数组的首字母
	 * 									备注4 : 
	 *感觉 C语言的数组 是个bug  									
	 */
	printf("ca [%s] \n",ca);
	//备注 下面这句话会出现问题
//	printf("ca [%s] \n",*ca);
	printf("ca [%p] \n",ca);
	printf("&ca [%p] \n",&ca);
	
	
	printf("*(&ca) [%s] \n",*(&ca));
	printf("ca[0] [%c] \n",ca[0]);
	printf("&(ca[0]) [%p] \n",&(ca[0]));
	printf("*&(ca[0]) [%c] \n",*(&(ca[0])));
	
	
	//物理地址 和 物理地址存放的值
	printf("&cpa [%p] cpa [%p] \n",&cpa,cpa);
	//物理地址 和 物理地址存放的值
	printf("cpa [%p] cpa [%s] \n",cpa,cpa);
	printf("*(&cpa) [%s] \n",*(&cpa));
	printf("*(&cpa) [%p] \n",*(&cpa));
	
	puts("charPointerTest 结束====");
	
	
}

	/**
	 * 备注: 遇到指针 脑海中就浮现出 地址 与 址值 两者之间的关系
	 */
	void charppTest() {
		puts("charppTest 开始====");
		//数组名 即 首地址
		char ca[]="abcd";
		char* cpa;
		char** cppa;
		//接下来所有的访问均是常用的正常访问 
		cpa=ca;
		cppa=&cpa;
		printf("ca [%p] ca [%s] \n",ca,ca);
		printf("&cpa [%p] cpa [%p] cpa [%s] \n",&cpa,cpa,cpa);
		printf("&cppa [%p] cppa [%p] *cppa [%p]  *cppa [%s]\n",&cppa,cppa,*cppa,*cppa);
		/*
		 * 地址 					址值
		 * ca 						%s格式的ca  或 abcd
		 * 							ca
		 * 							cpa
		 * 							*(&cpa)
		 * 							*(cppa)
		 * 							*(*(&cppa))
		 * &cpa
		 * 							cpa 
		 * 							ca 
		 * 							*(&cpa)
		 * 							*(cppa)
		 * 							*(*(&cppa))
		 * 	&cppa				
		 * 							cppa
		 * 							*(&cppa)
		 * 							
		 * 对于 指针 抓住 最原始的东西,然后 接下来 就是 对 最原始的东西的嵌套包装
		 */
		puts("charppTest 结束====");
	}


	void getWindowsPathEnvironmentParam() {
		puts("getWindowsPathEnvironmentParam 开始====");
		char* pathName="path";
		char* pathvalue=getenv(pathName);
		printf("pathvalue [%s] \n",pathvalue);
		
		printf("_JAVA_LAUNCHER_DEBUG [%s] \n",getenv("_JAVA_LAUNCHER_DEBUG"));
		printf("_JAVA_LAUNCHER_DEBUG [%s] \n",getenv("_JAVA_LAUNCHER_DEBUG"));
		puts("getWindowsPathEnvironmentParam 结束====");
	}
	
	void cArrayTestAPI(){
		puts("cArrayTestAPI 开始====");
		//第一种初始化
		char init1[6]="yuchao";
		//第二种初始化
		char init2[]="yuchao"; 
		//第三种初始化
		char* init3="yuchao"; 
		
	    int len = strlen(init1);
		for (int i = 0; i < len; ++i) {
			printf("init1值 %c \n", init1[i]);
		}

	    int len3 = strlen(init3);
		for (int i = 0; i < len3; ++i) {
			printf("init3 %c \n", init3[i]);
		}
		
		//变量的值分配的空间
		printf("init1 %d \n",sizeof(init1));//6
		printf("init2 %d \n",sizeof(init2));//7 因为有\0
		printf("init3 %d \n",sizeof(init3));//4 变量的值分配的空间大小
		
		//
		printf("init2 p格式 %p \n",init2);
		printf("init2 s格式 %s \n",init2);
		printf("init2 sizeof的值 %d \n",sizeof(init2));//7 因为有\0
	    int len2 = strlen(init2);
		for (int i = 0; i < len2; ++i) {
			printf("init2 索引 %d 索引的值 %c \n",i,init2[i]);
		}
		
		
		
		
		
		puts("cArrayTestAPI 结束====");
	}
	
	
	




