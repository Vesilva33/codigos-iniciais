#include<stdio.h>
#include<locale.h>
int main()
{
	int *p,x;
	setlocale(LC_ALL,"");
	p=NULL;
	x=1;
	p=&x;
	x= 7+*p;
	printf("o endere�o que aponta para p � %p e x � %d",&x,x);
}
