/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:07:26 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/09 16:31:46 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}

// #include <stdio.h>

// int main() {
//     char ch = 'b';
//     printf("Original: %c, Uppercase: %c\n", ch, ft_toupper(ch));  

//     ch = 'D';
//     printf("Original: %c, Uppercase: %c\n", ch, ft_toupper(ch)); 
	// 'D' remains 'D'

//     return (0);
// }
