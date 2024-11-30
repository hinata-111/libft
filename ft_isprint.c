/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:46:58 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/02 03:07:53 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int c = '1';
// 	int c1 = '\n';

// 	printf("%d", ft_isprint(c));
// 	printf("%d", ft_isprint(c1));

// 	return (0);
// }
