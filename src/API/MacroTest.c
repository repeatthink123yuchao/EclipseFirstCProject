/*
 * ApiMainTest.c
 *
 *  Created on: 2018年3月30日
 *      Author: len
 */
#include <stdio.h>
#include <stdlib.h>

//#include <pthread.sh>//线程
#include <ctype.h> //字符处理
#include <errno.h> //定义错误码
#include <float.h> //浮点数处理
//#include <fstream.h> //文件输入／输出
//#include <iomanip.h> //参数化输入／输出
//#include <iostream.h> //数据流输入／输出
#include <stdlib.h> //定义杂项函数及内存分配函数
#include <string.h> //字符串处理
//#include <strstrea.h> //基于数组的输入／输出
#include <time.h> //定义关于时间的函数
#include <wchar.h> //宽字符处理及输入／输出
#include <wctype.h> //宽字符分类
#include <assert.h> //设定插入点
#include <limits.h> //定义各种数据类型最值常量
#include <locale.h> //定义本地化函数
#include <math.h> //定义数学函数

//#include <cctype>
//#include <cerrno>
//#include <clocale>
//#include <cmath>
//#include <algorithm> //STL 通用算法
//#include <bitset> //STL 位集容器
//#include <complex> //复数类
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <deque> //STL 双端队列容器
//#include <exception> //异常处理类

//#include <fstream>
//#include <functional> //STL 定义运算函数（代替运算符）
//#include <limits>
//#include <list> //STL 线性列表容器
//#include <map> //STL 映射容器
//#include <iomanip>
//#include <ios> //基本输入／输出支持
//#include <iosfwd> //输入／输出系统使用的前置声明
//#include <iostream>
//#include <istream> //基本输入流
//#include <ostream> //基本输出流
//#include <queue> //STL 队列容器
//#include <set> //STL 集合容器
//#include <sstream> //基于字符串的流
//#include <stack> //STL 堆栈容器
//#include <stdexcept> //标准异常类
//#include <streambuf> //底层输入／输出支持
//#include <string> //字符串类
//#include <utility> //STL 通用模板类
//#include <vector> //STL 动态数组容器
//#include <cwchar>
//#include <cwctype>

#include <stdbool.h> //布尔环境
#include <stdint.h> //整型环境
#include <tgmath.h> //通用类型数学宏
#include <fenv.h> //浮点环境
#include <inttypes.h> //整数格式转换
#include <complex.h> //复数处理


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









