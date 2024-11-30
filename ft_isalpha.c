/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:46:42 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/10/24 03:46:43 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int c = '1';
// 	int c1 = 'a';

// 	printf("%d", ft_isalpha(c));
// 	printf("%d", ft_isalpha(c1));
// }