#include<stdio.h>
#include<windows.h>


void print(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {6,7,8,9,10},{2,3,4,5,6} };
	print(arr, 3, 5);
	system("pause");
	return 0;
}


////判断当前机器的字节序
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret;
//	ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	system("pause");
//	return 0;
//}



////交换两个数组的内容
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//	system("pause");
//	return 0;
//}


//void Reverce(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//	//for (i = 0; i<sz / 2; i++)
//	//{
//	//	int tem = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tem;
//	//	right--;//一个一个遍历
//	//	left++;
//	//}
//}
//void  Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");//换行
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverce(arr, sz);//将数组逆序
//	Print(arr, sz);//打印数组
//	system("pause");
//	return 0;
//}