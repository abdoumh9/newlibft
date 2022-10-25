/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:13:52 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 13:13:56 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(const char *s);
void	ft_bzero(void *b, size_t len );
void	*ft_calloc(size_t cont, size_t len);
int		ft_isalnum(int c);
int		ft_isalpha(int b);
int		ft_isascii(int b);
int		ft_isdigit(int b);
int		ft_isprint(int b);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dist, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int j, size_t len );
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *to, const char *find, size_t len);
char	*ft_strrchr(const char*s, int c);
int		ft_tolower(int b);
int		ft_toupper(int i);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strtrim(char const *s, char const *set);
char	**ft_split(char const *s, char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned	int, char*));

#endif