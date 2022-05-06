#include<stdio.h>
int add(int num)
{
	if (num == 0)
		return 0;
	else
	{
		//sum = sum + num;
		return num + add(num - 1);
	}
	//return sum;
}



int main()
{
	int n;
	printf("Enter n val :");
	scanf("%d",&n);
	int Sum = add(n);
	printf("The sum is : %d",Sum);
	return 0;
}
