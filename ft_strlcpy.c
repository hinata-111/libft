/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:58:25 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 09:45:43 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	j;

	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (src_size);
}

// int	main(void)
// {
// 	char src[] = "hello";
// 	char dest[20];

// 	printf("%ld", ft_strlcpy(dest, src, 4));
// 	printf("\n%s", dest);
// 	printf("\n%ld", ft_strlcpy(dest, src, 7));
// 	printf("\n%s", dest);
// }