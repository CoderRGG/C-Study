#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
////实现自己的strcpy(优化3）
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	char* ret= arr1;
//	assert(arr1 != NULL);//断言
//	assert(arr2 != NULL);//断言
//	//把arr2指向的字符串拷贝到arr1指向的空间，包含字符'\0'
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}

////实现自己的strcpy(优化2）
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//断言
//	assert(arr2 != NULL);//断言
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

////实现自己的strcpy(优化1）
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





////实现自己的strcpy
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
//		ret = 1;//循环结束后ret要重新重置ret
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



////  自己定义strlen
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
//	//用指针打印数组
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