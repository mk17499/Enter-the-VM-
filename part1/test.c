#include <stdio.h>
#include <bits/types.h>
#include<stdint.h>
void HC_print32bit(uint32_t val)
{
	// Fill in here
	int arr[32] = {0};
	for(int i = 31;i>=0;i--)
	{
		if(val & 1)
			arr[i] = 1;
		else	
			arr[i] = 0;
		val >>= 1;
	}
	for(int i = 0;i<32;i++)
		printf("%d",arr[i]);
	printf("\n");
}
int main()
{
    uint32_t x = 1024;
    HC_print32bit(x);
}