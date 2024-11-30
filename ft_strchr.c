/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:34:20 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/09 17:40:42 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "   ";
// 	char		ch;
// 	char		*result;

// 	ch = 'o';
// 	result = ft_strchr(str, ch);
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
