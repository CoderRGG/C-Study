#include<windows.h>
#include<stdio.h>


////�Ż�ð������
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ����Ҫ����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ�ŵ������Ѿ�����
//		//ÿһ�˵�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;//��if����Ѿ�ִ�� ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//			
//	}
//}
//
//
//
//int main()
//{
//	int i = 0;
//	int arr[] = {9,1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

    //ð������(1)
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//    for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1209815 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


//   ��ӡ��ַ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//  system("pause");
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz; i++)
//	{
//		printf("%d ",arr[i]);\\    arr[i]���±���ȷ�������Ԫ��
//	}
//	system("pause");
//	return 0;
//}



//   printf�ķ���ֵΪ�ַ����ĸ���
//int main()
//{   
//	printf("%d", printf("%d", printf("%d"), 43));
//	system("pause");
//	return 0;
//}



//��ַ  �ı��ַ��ָ��λ�õ�ֵ
//void ADD(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n",num);
//	ADD(&num);
//	printf("num=%d\n",num);
//	system("pause");
//	return 0;
//}


//              ���ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//
//{
//
//	int k = 7;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("�Ҳ����������\n ");
//	}
//	else
//	{
//		printf("�ҵ���������֣��±���:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}



