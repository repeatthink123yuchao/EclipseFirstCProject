/*
 * ApiMainTest.c
 *
 *  Created on: 2018��3��30��
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>

//#include <pthread.sh>//�߳�
#include <ctype.h> //�ַ�����
#include <errno.h> //���������
#include <float.h> //����������
//#include <fstream.h> //�ļ����룯���
//#include <iomanip.h> //���������룯���
//#include <iostream.h> //���������룯���
#include <stdlib.h> //������������ڴ���亯��
#include <string.h> //�ַ�������
//#include <strstrea.h> //������������룯���
#include <time.h> //�������ʱ��ĺ���
#include <wchar.h> //���ַ��������룯���
#include <wctype.h> //���ַ�����
#include <assert.h> //�趨�����
#include <limits.h> //�����������������ֵ����
#include <locale.h> //���屾�ػ�����
#include <math.h> //������ѧ����

//#include <cctype>
//#include <cerrno>
//#include <clocale>
//#include <cmath>
//#include <algorithm> //STL ͨ���㷨
//#include <bitset> //STL λ������
//#include <complex> //������
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <deque> //STL ˫�˶�������
//#include <exception> //�쳣������

//#include <fstream>
//#include <functional> //STL �������㺯���������������
//#include <limits>
//#include <list> //STL �����б�����
//#include <map> //STL ӳ������
//#include <iomanip>
//#include <ios> //�������룯���֧��
//#include <iosfwd> //���룯���ϵͳʹ�õ�ǰ������
//#include <iostream>
//#include <istream> //����������
//#include <ostream> //���������
//#include <queue> //STL ��������
//#include <set> //STL ��������
//#include <sstream> //�����ַ�������
//#include <stack> //STL ��ջ����
//#include <stdexcept> //��׼�쳣��
//#include <streambuf> //�ײ����룯���֧��
//#include <string> //�ַ�����
//#include <utility> //STL ͨ��ģ����
//#include <vector> //STL ��̬��������
//#include <cwchar>
//#include <cwctype>

#include <stdbool.h> //��������
#include <stdint.h> //���ͻ���
#include <tgmath.h> //ͨ��������ѧ��
#include <fenv.h> //���㻷��
#include <inttypes.h> //������ʽת��
#include <complex.h> //��������


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









