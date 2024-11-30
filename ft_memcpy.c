/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:44:54 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 04:56:22 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)str;
	size_t				i;

	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
//     char src[] = "Hello";
//     char dest[10];
//     ft_memcpy(dest, src, strlen(src)+1);
//     printf("%s",dest);
//     printf("%s",src);

//     return (0);
// }