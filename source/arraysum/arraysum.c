#include<stdio.h>
void helper(int *arr,int len,int k)
{
	int arr2[506] = {0};
	int i=0;
	for(;i<len;i++)
	{
		arr2[arr[i]+5]++;
	}
	for(i=0;i<506;i++)
	{
		if(arr2[i]!=0)
		{
			if(arr2[k-i-5]!=0)
				printf("%d and %d\n");
		}
	}
}

int main(void)
{
	int arr[] = {1,2,3,4,5};
	helper(arr,5,5);
	return 0;
}