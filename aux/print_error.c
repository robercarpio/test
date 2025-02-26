#include "aux.h"

void	print_error(char *error)
{
	while(*error)
	{
		write(1,&(*error),1);
		error++;
	}
	write(1,"\n",1);
}