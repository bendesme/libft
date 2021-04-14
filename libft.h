#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>

int	ft_atoi(char *str);

int	ft_isalnum(int c);

int	ft_isdigit(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t	ft_strlcat(char *dest, char *src, size_t size);

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strrchr(const char *s, int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

void	ft_bzero(void *s, size_t n);

#endif
