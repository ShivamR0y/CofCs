#include<stdio.h>
void print(char a[])
{
	char* p = a;
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
}
void main()
{
	char a[] = "Sample text";
	print(a);
}
