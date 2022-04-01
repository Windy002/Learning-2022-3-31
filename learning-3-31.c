#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// std --stdard 标准
// i--input 输入
// o--output 输出
// stdio.h 标准的输入和输出的头文件文件
//
// 
// c语言的代码中一定要有main函数
//主函数
// c语言语言规定
// main函数是程序的入口
// 有且只有一个main函数
// 
// printf是一个库函数
// --专门用来打印数组的
// 
// vs2019环境如何运行代码:
// ctrl + f5
// 如果不行就是ctrl + fn +f5
// 标准写法 int main

//int main()
//{
//	int a = 7;
//	scanf("%d", &a);
//	printf("Hello,world%d\n", a);
//	return 0;
//}


//古老写法--不推荐
// void main()

//int main()
//{
//	printf("%d\n", sizeof(int)); //4 use %su to print sizeof( type ),which is truly accurate.
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(char));//1
//
//	return 0;
//}


// 变量和常量的概念
// 变量分为：
// 局部变量：{ } 内定义的变量
// 全局变量：{ } 外定义的变量

//int main()
//{
//	short age = 19; // age
//	int hight = 177; // higth
//	float weight = 52.7; // weight
//	//都是局部变量
//	
//	return 0;
//}


//int a = 100; //全局变量
//int main()
//{
//	int a = 10; //局部变量
//	// 当全局变量和局部变量名字相同的情况下，局部优先，
////	// 局部变量暂时被屏蔽
////	// 但是不建议全局和局部变量的名字相同
////	// int a=100; 
////	printf("a=%d\n", a);
////	return 0;
//}
////变量在其范围内不能重复定义，会报错
////变量在其范围内起作用


//写一个代码。计算两个数之和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	return 0;
//}

int main()
{
    char name[] = "Name    Age    Gender\n---------------------\nJack ";
    int age = 18;
    char sex[] = "man";
    printf("%s   %d    %s", name, age, sex);

    return 0;
}