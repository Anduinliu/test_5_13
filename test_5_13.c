 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<windows.h>
//��̬�ڴ����
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//20��struct S���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ� - ���ٳɹ�
//		int i = 0;
//		for (i = 0; i < 10  ; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc
//������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵĿռ�
//	//��������20���ֽڲ����������ǵ�ʹ����
//	//ϣ������40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc�������������ٵ��ڴ�
//	//
//	//realloc����ʹ��ʱ��ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷��,��ֱ��׷��,�󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷��,��realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ�,���Ұ�ԭ���ڴ��е����ݿ�������,�ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//*******************************��������*******************************
//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ����,p�ͱ���ֵΪNULL
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//	//2.�Զ�̬���ٵ��ڴ��Խ�����.
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p = NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//	//3.�ԷǶ�̬�����ڴ��free
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	////
//
//	//free(p);
//	//p = NULL;
//	// 
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ�ÿռ�
//	////�ͷſռ�
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	/*while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}*/
//
//	return 0;
//}
//int main()
//{
////	//int* p = (int*)malloc(40);
////	//if (p == NULL)
////	//{
////	//	return 0;
////	//}
////	//int* p2 = realloc(p, 80);
////	//if (p2 != NULL)
////	//{
////	//	p = p2;
////	//}
////	//int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//����1��
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}
//1.���д���������ֱ���������
//2.��������ڴ�й©������
//str��ֵ���ݵ���ʽ��p
//p��GetMemory�������β�,ֻ���ں����ڲ���Ч
//��GetMemory��������֮��,��̬�����ڴ���δ�ͷ�
//�����޷��ҵ�,���Ի�����ڴ�й©
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}