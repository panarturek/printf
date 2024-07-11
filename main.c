#include "ft_printf.h"
#include <stdio.h>

int	main(void)



{
char* marek;
char c = 'd';

marek = NULL;
	//ft_printf(marek);
	ft_printf("%u is a positive number.%c%s%p%d%i%u%x%X%%\n", 42,c,marek,marek,42,42,42,42,42);
	/*ft_printf("%u is a positive number.\n", -1);
	ft_printf("%x is a hexadecimal number.\n", 42);
	printf("%x is a hexadecimal number.\n", 42);
	ft_printf("%X is a hexadecimal number.\n", 42);
	printf("%X is a hexadecimal number.\n", 42);
	ft_printf("%%\n");
	printf("%%\n");
	ft_printf("%p is a pointer.\n", NULL);
	printf("%p is a pointer.\n", NULL);
	ft_printf("%p is a pointer.\n", &main);
	printf("%p is a pointer.\n", &main);*/
	return (0);
}
