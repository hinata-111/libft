/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:41:05 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/09 18:18:14 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*find;

	find = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			find = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)find);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *str = "Hello, world!";
// 	char ch = 'o';

// 	char *result = ft_strrchr(str, ch);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", ch);
// 	}

// 	return (0);
// }