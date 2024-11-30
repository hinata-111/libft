/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:46:52 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/10/24 03:46:53 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int main(){

//     int c = '1';
//     int c1 = 'a';
//     printf("%d",ft_isdigit(c));
//     printf("%d",ft_isdigit(c1));

//     return (0);

// }