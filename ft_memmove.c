/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:56:55 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 08:54:01 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (unsigned char *)dest;
	if (d < s)
	{
		i = 0;
		while (n--)
			d[i] = s[i];
		i++;
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src1[] = "Hello, World!";
// 	char	dest1[20];
// 	char	src2[] = "OverlappingTest";

// 	// コピー元とコピー先が重ならない場合
// 	printf("Before ft_memmove (non-overlapping):\n");
// 	printf("Source: %s\n", src1);
// 	// src1の内容をdest1にコピー
// 	ft_memmove(dest1, src1, strlen(src1) + 1); // +1は終端文字 '\0' も含めるため
// 	printf("After ft_memmove (non-overlapping):\n");
// 	printf("Destination: %s\n\n", dest1); // コピー結果の確認
// 	// コピー元とコピー先が重なる場合
// 	printf("Before ft_memmove (overlapping):\n");
// 	printf("Source: %s\n", src2);
// 	// src2の"Overlapping"部分を、src2の"Test"の位置にコピー
// 	ft_memmove(src2 + 4, src2, 10); // "Overlapping" を "Test" に重ねてコピー
// 	printf("After ft_memmove (overlapping):\n");
// 	printf("Source as Destination: %s\n", src2); // コピー結果の確認
// 	return (0);
// }
