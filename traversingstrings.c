#include<stdio.h>
void print(char* p)
{
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
