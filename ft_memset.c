/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:02:26 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 03:37:56 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main() {
//     char buffer[10];

//     // バッファ全体を 'A' で埋める
//     ft_memset(buffer, 'A', sizeof(buffer));

//     // 結果を表示
//     for (size_t i = 0; i < sizeof(buffer); i++) {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");

//     return (0);
// }