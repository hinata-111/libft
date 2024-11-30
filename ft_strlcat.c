/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:45:38 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/09 16:02:08 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + 1 < size)
	{
		dest[dest_len + 1] = src[i];
		i++;
	}
	return (dest_len + src_len);
}

// my_strlcat 関数のプロトタイプ宣言
//size_t	my_strlcat(char *pDestination, const char *pSource, size_t Size);

// int	main(void)
// {
// 	char		dest1[20] = "Hello, ";
// 	const char	*src1 = "World!";
// 	//size_t		size1;
// 	size_t		result1;
// 	char		dest2[10] = "Hi, ";
// 	const char	*src2 = "everyone!";
// 	size_t		size2;
// 	size_t		result2;
// 	//size1 = sizeof(dest1);
// 	// 1. 十分なバッファサイズの場合
// 	printf("Before my_strlcat:\n");
// 	printf("Destination: \"%s\"\n", dest1);
// 	result1 = ft_strlcat(dest1, src1, 3);
// 	printf("After my_strlcat:\n");
// 	printf("Destination: \"%s\"\n", dest1);
// 	printf("Return value: %zu\n", result1);
// 	printf("Expected length: %zu\n\n", strlen(dest1));
// 	// 2. バッファサイズが足りない場合
// 	size2 = sizeof(dest2);
// 	printf("Before my_strlcat:\n");
// 	printf("Destination: \"%s\"\n", dest2);
// 	result2 = ft_strlcat(dest2, src2, size2);
// 	printf("After my_strlcat:\n");
// 	printf("Destination: \"%s\"\n", dest2);
// 	printf("Return value: %zu\n", result2);
// 	printf("Expected length: %zu\n\n", strlen(dest2));
// 	return (0);
// }
