#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
////ʵ���Լ���strcpy(�Ż�3��
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	char* ret= arr1;
//	assert(arr1 != NULL);//����
//	assert(arr2 != NULL);//����
//	//��arr2ָ����ַ���������arr1ָ��Ŀռ䣬�����ַ�'\0'
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}

////ʵ���Լ���strcpy(�Ż�2��
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//����
//	assert(arr2 != NULL);//����
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

////ʵ���Լ���strcpy(�Ż�1��
//void my_strcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}

//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
}





////ʵ���Լ���strcpy
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}

//int main()
//{	
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//ѭ��������retҪ��������ret
//		for (j= 1; j <= i; j ++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}



////  �Լ�����strlen
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	char arr[] ="bit";
//	int sz = my_strlen(arr);
//	printf("%d\n", sz);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//��ָ���ӡ����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p= arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i< sz; i++)
//	{
//		printf("%d  ", *p);
//		p = p + 1;  //  p+=2;
//	}
//	system("pause");
//	return 0;
//}