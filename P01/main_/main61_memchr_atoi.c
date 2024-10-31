/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/29 18:07:09 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memchr.c

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	main(void)
{
/*// test ft_memchr.c .................................................
	const char	*str5;
	char	string5[] = "Learning to Fly";
	char	to_find1 = '7';
	char	to_find2 = 'n';
	char	to_find3 = 'i';

	printf ("\ntest ft_memchr.c\n");
	
	printf(" string5 : %s\n", string5);

	printf("to_find1  : %c\n", to_find1);
	str5 = ft_memchr(string5, to_find1, 10);
	printf("ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find1, 10);
	printf("memchr    : %s\n", str5);
		
	printf(" to_find2  : %c\n", to_find2);
	str5 = ft_memchr(string5, to_find2, 10);
	printf(" ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find2, 10);
	printf(" memchr    : %s\n", str5);

	printf("to_find3  : %c\n", to_find3);
	str5 = ft_memchr(string5, to_find3, 10);
	printf("ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find3, 10);
	printf("memchr    : %s\n", str5);

// test ft_memcmp.c ...................................................
	char	string7[] = "aafbg";
	char	string8[] = "aAbd";
	int	num = 3;

	printf ("\ntest ft_memcmp.c\n");

	printf ("\nstring7 : %s\n", string7);
	printf ("string8 : %s\n", string8);
	printf ("num     : %d\n\n", num);
	
	printf ("ft_memcmp : %d\n", ft_memcmp(string7, string8, num));
	printf (" memcmp   : %d\n\n", memcmp(string7, string8, num));
*/
// test ft_strnstr ......................................................
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	const char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("strnstr : %s\n", ptr);

	char	string1[] = "Learning to Fly";
	char	to_find1[] = "";
	char	to_find2[] = "ab";
	char	to_find3[] = "nin";

	printf("\n string1 : %s\n", string1);

	printf("to_find1   : %s\n", to_find1);
	printf("ft_strnstr : %s\n", ft_strnstr(string1, to_find1, 2));
//	printf ("\nstrnstr    : %s\n\n", strnstr(string1, to_find1, 2));
	
	printf(" to_find2   : %s\n", to_find2);
	printf(" ft_strnstr : %s\n", ft_strnstr(string1, to_find2, 2));
//	printf ("\nstrnstr    : %s\n\n", strnstr(string1, to_find2, 2));

	printf("to_find3   : %s\n", to_find3);
	printf("ft_strnstr : %s\n", ft_strnstr(string1, to_find3, 2));
//	printf ("\nstrnstr    : %s\n\n", strnstr(string1, to_find3, 2));
	
/* 	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4);
	printf("strnstr : %d\n", ptr);*/

//test ft_atoi.c ........................................................


	char	string10[] = " ---+--+1234ab567";
	char	string11[] = "    \t -1234ab567";
	char	string12[] = "001abc/$";
	char	string13[] = "+++1324%";

	printf ("\nstring : %s\n", string10);
	printf ("ft_atoi : %d\n", ft_atoi(string10));
	printf (" atoi   : %d\n", atoi(string10));

	printf ("\nstring1 : %s\n", string11);
	printf ("ft_atoi : %d\n", ft_atoi(string11));
	printf (" atoi   : %d\n", atoi(string11));

	printf ("\nstring2 : %s\n", string12);
	printf ("ft_atoi : %d\n", ft_atoi(string12));
	printf (" atoi   : %d\n", atoi(string12));

	printf ("\nstring3 : %s\n", string13);
	printf ("ft_atoi : %d\n", ft_atoi(string13));
	printf (" atoi   : %d\n", atoi(string13));
}