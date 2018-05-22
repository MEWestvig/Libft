#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ptr;
	int		found;
	int		i;
	int		j;

	i = -1;
	found = 0;
	j = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	ptr = haystack;
	while (*(haystack + ++i) && !found)
	{
		if (*(haystack + i) == *needle)
		{
			found = 1;
			while (found && *(needle + j))
			{
				if (*(haystack + i++) != *(needle + j++))
					found = 0;
			}
			return ((char *)(haystack + i));
		}
	}
}
