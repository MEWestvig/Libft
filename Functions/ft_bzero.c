#include "libft.h"
#include <strings.h>

void	bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (n > 0)
		s[n--] = 0;
	return ;
}
