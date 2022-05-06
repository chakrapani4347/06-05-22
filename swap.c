#include<stdio.h>
void swap(void *a,void *b)
{
	*(int *)(a) = *(int *)(a) + (*(int *)(b)); 
	*(int *)(b) = *(int *)(a) - (*(int *)(b)); 
	*(int *)(a) = *(int *)(a) - (*(int *)(b));
}

int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before swapping : \n a = %d\tb = %d\n",a,b);
	swap(&a,&b);
	printf("After swapping : \n a = %d\tb = %d\n",a,b);
	return 0;
}

