/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:47:03 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/10/24 03:47:04 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}

// #include<stdio.h>
// int main()
// {
//     char *str = "aaaaa";

//     printf("%d",ft_strlen(str));

//     return (0);
// }