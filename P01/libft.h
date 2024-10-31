/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:47:51 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 17:56:17 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
# define libft

# include <stdio.h>
# include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_strlen(const char *str);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_toupper(char *str);
char		*ft_tolower(char *str);
const char	*ft_strchr(const char *str, int c);
const char	*ft_strrchr(const char *str, int c);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
const char	*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
const char	*ft_strnstr(const char *big, const char *lit, size_t len);
int			ft_atoi(char *str);
void		*ft_calloc(size_t num, size_t size);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);

#endif
