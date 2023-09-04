

//#include <stdio.h>
//int main()
//{
//	int opinion = 0;
//	printf("是否喜欢初音未来？（0/1）\n");
//	printf ("请做出你的选择\n");
//	scanf_s("%d", &opinion);
//	if (opinion = 1)
//	{
//		printf("我果然没看错你，尊敬的骑士。\n");
//	}
//	else
//	{
//		printf("我为你的选择感到遗憾。\n");
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
////		printf("粉丝不足，继续传教\n现有粉丝数：%d\n\n",people);
////		people++;
////	}
////	printf("粉丝达到百人！！！！！");
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