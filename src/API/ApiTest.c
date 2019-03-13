/*
 * ApiMainTest.c
 *
 *  Created on: 2018��3��30��
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>

void constAPI() {
	puts("constAPI ��ʼ====");
	/*
	 * ���α���
	 */
	const int a=5;
/*
	 a ��ֵ 0028FEFC
	a [5]
	a [5] &a [0028FEFC]
*/
	printf(" a ��ֵ %p \n",&a);
	printf("a [%d] \n",a);
	printf("a [%d] &a [%p] \n",a,&a);
	
	/**
	 * char* �� char[] ûʲô���� 
	 * 
	 */
	char* hand="˫�ַ��������";
	char chars[]="�ַ�����";
/*
	hand [˫�ַ��������] chars [�ַ�����]
	*(&hand) [˫�ַ��������] *(&chars) [�ַ�����]
	&hand [0028FEF8] &chars [0028FEEF]
*/

	printf("hand [%s] chars [%s] \n",hand,chars);
	printf("*(&hand) [%s] *(&chars) [%s] \n",*(&hand),*(&chars));
	printf("&hand [%p] &chars [%p] \n",&hand,&chars);
	puts("constAPI ����====");
}


void pointerSetGetTest() {
	puts("pointerSetGetTest ��ʼ====");
	int a=10;
	/*
	 * a		��ַ��ֵ
	 * &a	 	��ַ��ֵ �� �����ַ 
	 * *(&a)	�����ַ �洢��ֵ 
	 */
	printf("a [%d] 10 [%d] &a [%p] *(&a) [%d] \n",a,10,&a,*(&a));
	//* �� �����ָ�����
	int* p;
	p=&a;
	/*
	 * ָ�����p�������ַ: &p
	 * ָ�����p�������ַ ��ŵ�����: p �� *(&p) �� &a
	 * ָ�����pָ��ĵ�ַ �� ֵ: a �� *p �� **(&p)  �� *(&a) 
	 */
	printf("&p [%p] \n",&p);
	printf("p [%p] *(&p) [%p] &a [%p] \n",p,*(&p),&a);
	printf("a [%d] *p [%d] **(&p) [%d] *(&a)  [%d] \n",a,*p,**(&p),*(&a));
	
	puts("pointerSetGetTest ����====");
}


void charPointerTest() {
	puts("charPointerTest ��ʼ====");
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
	 * 1 �ַ�ָ��
	 * 2 �ַ���ָ��
	 * 3 �����׵�ַ : ������ �� �����һ��Ԫ�صĵ�ַ
	 */
	char* cp;
	char c='c';
	//ָ�븳ֵ
	cp=&c;
	//ֵ���� ָ��ı�����ʶ��һ����ַ [���ߵȼ�]  ��ָ������ı�ʶ��һ���������� [���ߵȼ�]  
	printf("cp [%p]  c [%c] \n",cp,c);
	//ַ���� ָ�������ʶ �� ��ַ , ��ָ������ı�ʶ �� ��ַ 
	printf("&cp [%p]  &c [%p] \n",&cp,&c);
	//ͨ�� ��ַ ���� ��ַ��ֵַ
	printf("*(&cp) [%p] **(&cp) [%c] *(&c) [%c] \n",*(&cp),**(&cp),*(&c));
	
	/*
	 * �ַ�����
	 * 1 ������ �� �׵�ַ
	 * 2 ���� �� ��һ��Ԫ�� �ĵ�ַ Ҳ�� ������׵�ַ
	 */
	char* cpa;
	char ca[]="abcd";
	//ָ�븳ֵ cpa=ca;  �� cpa=&ca; �� cpa=&(ca[0])
	cpa=ca;
	/*
	 * ���� ����������ܽ�
	 * ����%p���			 		����%s���
	 * ��ַ							ֵַ
	 * ca								ca
	 * 									��ע1 : �� %p ��� ca ʱ������� ����������ַ
	 * 									��ע2 : �� %s ��� ca ʱ������� ����������ַ ��ŵ� �����ֵ
	 * 									��ע3 : �� %p ��� ca ��ֵ ͬ '��%p��� &ca ��ֵ����ͬ��'
	 * 									��ע4 : �� %s ��ӡ *ca ʱ����ᱨ��	
	 * &ca							*(&ca)
	 * 									��ע1 : &ca �� ca �� %p ��ӡʱ ��ӡ������ֵ ��������ͬ��
	 * 									��ע2 : �� %s ��ӡ *ca ʱ����ᱨ��
	 * 									��ע3 : �� %s ��ӡ *(&ca) ʱ ��ӡ����  ����������ַ ��ŵ� �����ֵ
	 * 									��ע4 : 
	 * &(ca[0])						*(&(ca[0]))
	 * 									��ע1 : �� %p ��ӡ ca &ca &(ca[0]) ʱ,���ߴ�ӡ��ֵ��һ����
	 * 									��ע2 : �� %s ��ӡ *(&(ca[0])) ʱ ����ͻᱨ��
	 * 									��ע3 : �� %c ��ӡ *($(ca[0]) ʱ ����������� ���������ĸ
	 * 									��ע4 : 
	 *�о� C���Ե����� �Ǹ�bug  									
	 */
	printf("ca [%s] \n",ca);
	//��ע ������仰���������
//	printf("ca [%s] \n",*ca);
	printf("ca [%p] \n",ca);
	printf("&ca [%p] \n",&ca);
	
	
	printf("*(&ca) [%s] \n",*(&ca));
	printf("ca[0] [%c] \n",ca[0]);
	printf("&(ca[0]) [%p] \n",&(ca[0]));
	printf("*&(ca[0]) [%c] \n",*(&(ca[0])));
	
	
	//�����ַ �� �����ַ��ŵ�ֵ
	printf("&cpa [%p] cpa [%p] \n",&cpa,cpa);
	//�����ַ �� �����ַ��ŵ�ֵ
	printf("cpa [%p] cpa [%s] \n",cpa,cpa);
	printf("*(&cpa) [%s] \n",*(&cpa));
	printf("*(&cpa) [%p] \n",*(&cpa));
	
	puts("charPointerTest ����====");
	
	
}

	/**
	 * ��ע: ����ָ�� �Ժ��о͸��ֳ� ��ַ �� ֵַ ����֮��Ĺ�ϵ
	 */
	void charppTest() {
		puts("charppTest ��ʼ====");
		//������ �� �׵�ַ
		char ca[]="abcd";
		char* cpa;
		char** cppa;
		//���������еķ��ʾ��ǳ��õ��������� 
		cpa=ca;
		cppa=&cpa;
		printf("ca [%p] ca [%s] \n",ca,ca);
		printf("&cpa [%p] cpa [%p] cpa [%s] \n",&cpa,cpa,cpa);
		printf("&cppa [%p] cppa [%p] *cppa [%p]  *cppa [%s]\n",&cppa,cppa,*cppa,*cppa);
		/*
		 * ��ַ 					ֵַ
		 * ca 						%s��ʽ��ca  �� abcd
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
		 * ���� ָ�� ץס ��ԭʼ�Ķ���,Ȼ�� ������ ���� �� ��ԭʼ�Ķ�����Ƕ�װ�װ
		 */
		puts("charppTest ����====");
	}


	void getWindowsPathEnvironmentParam() {
		puts("getWindowsPathEnvironmentParam ��ʼ====");
		char* pathName="path";
		char* pathvalue=getenv(pathName);
		printf("pathvalue [%s] \n",pathvalue);
		
		printf("_JAVA_LAUNCHER_DEBUG [%s] \n",getenv("_JAVA_LAUNCHER_DEBUG"));
		printf("_JAVA_LAUNCHER_DEBUG [%s] \n",getenv("_JAVA_LAUNCHER_DEBUG"));
		puts("getWindowsPathEnvironmentParam ����====");
	}
	
	void cArrayTestAPI(){
		puts("cArrayTestAPI ��ʼ====");
		//��һ�ֳ�ʼ��
		char init1[6]="yuchao";
		//�ڶ��ֳ�ʼ��
		char init2[]="yuchao"; 
		//�����ֳ�ʼ��
		char* init3="yuchao"; 
		
	    int len = strlen(init1);
		for (int i = 0; i < len; ++i) {
			printf("init1ֵ %c \n", init1[i]);
		}

	    int len3 = strlen(init3);
		for (int i = 0; i < len3; ++i) {
			printf("init3 %c \n", init3[i]);
		}
		
		//������ֵ����Ŀռ�
		printf("init1 %d \n",sizeof(init1));//6
		printf("init2 %d \n",sizeof(init2));//7 ��Ϊ��\0
		printf("init3 %d \n",sizeof(init3));//4 ������ֵ����Ŀռ��С
		
		//
		printf("init2 p��ʽ %p \n",init2);
		printf("init2 s��ʽ %s \n",init2);
		printf("init2 sizeof��ֵ %d \n",sizeof(init2));//7 ��Ϊ��\0
	    int len2 = strlen(init2);
		for (int i = 0; i < len2; ++i) {
			printf("init2 ���� %d ������ֵ %c \n",i,init2[i]);
		}
		
		
		
		
		
		puts("cArrayTestAPI ����====");
	}
	
	
	




