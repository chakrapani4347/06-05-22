#include<stdio.h>
int reverse(int num)
{
	int rem;
	static int rev = 0;
	if (num)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		reverse(num / 10);
	}
	else
		return 0;
	return rev;
}
int main()
{
	int num;
	printf("Enter num val :");
	scanf("%d",&num);
	int rev = reverse(num);
	printf("The rev no is : %d",rev);
	return 0;
}
