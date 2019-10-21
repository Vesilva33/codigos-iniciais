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
	printf("o endereço que aponta para p é %p e x é %d",&x,x);
}
