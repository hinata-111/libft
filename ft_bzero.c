/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:04:09 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 03:42:24 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
//     char buffer[10];

//     // 配列全体をゼロで初期化
//     ft_bzero(buffer, sizeof(buffer));

//     // 結果を表示
//     for (size_t i = 0; i < sizeof(buffer); i++) {
//         printf("%d ", buffer[i]);  // すべての要素が 0 になる
//     }
//     printf("\n");

//     return (0);
// }
