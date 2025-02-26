#include "aux.h"

int	ber_file(char *str)
{
	int	len;

	if(!str)
		return(0);
	len = line_len(str);
	return((str_compare(str + len - 4,".ber") == 0) && len > 4);
}