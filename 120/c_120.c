#include <stdio.h>
void main()
{
	int a = 50;
	int *b = &a;
	*b = *b + 20;
	printf("%d, %d", a, *b);
	char* s;
	s = "gilbut";

}