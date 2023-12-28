#include<stdio.h>

void size(int a[] ,int tsize)
{
	int len;
	
	len = tsize/sizeof(0);
	printf("Length of Array = %d\n",len);
}

main()
{
	int a[] = {7,10,17,18,32,31,49,66,20};
	
	size(a,sizeof(a));
}