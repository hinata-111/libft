/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:46:48 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/10/24 03:46:49 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int c = '1';
// 	int c1 = ',';

// 	printf("%d", ft_isascii(c));
// 	printf("%d", ft_isascii(c));

// 	return (0);
// }