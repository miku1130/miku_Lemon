

//#include <stdio.h>
//int main()
//{
//	int opinion = 0;
//	printf("�Ƿ�ϲ������δ������0/1��\n");
//	printf ("���������ѡ��\n");
//	scanf_s("%d", &opinion);
//	if (opinion = 1)
//	{
//		printf("�ҹ�Ȼû�����㣬�𾴵���ʿ��\n");
//	}
//	else
//	{
//		printf("��Ϊ���ѡ��е��ź���\n");
//
//	}
//	return 0;
//	
//}
//#include <stdio.h>
////int main()
////{
////	int people = 0;
////	while (people < 100)
////	{
////		printf("��˿���㣬��������\n���з�˿����%d\n\n",people);
////		people++;
////	}
////	printf("��˿�ﵽ���ˣ���������");
////	return 0;
//
////}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int A = 10, B = 60;
//	int sum = add(A, B);
//	printf("%d", sum);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int A = 0, B = 0;
	int arr[5] = { 1,2,3,4,5 };
	scanf_s("%d", &arr[1]);
	while (A < 5)
	{

		printf("%d\n\n", arr[A]);
		A++;
	}
	return 0; 

}