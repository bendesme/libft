#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "couscouscouscoustcouscous";
	const char *substr = "coust";
	//printf("%d\n", ft_isalnum(5));
	printf("%s", strnstr(str, substr, 23));
}
