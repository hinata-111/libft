/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:26:50 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/09 16:33:55 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

// #include <stdio.h>

// int ft_tolower(int c);

// int main() {
//     char ch = 'G';
//     printf("Original: %c, Lowercase: %c\n", ch, ft_tolower(ch)); 
 // 'G'-> 'g'

//     ch = 'm';
//     printf("Original: %c, Lowercase: %c\n", ch, ft_tolower(ch)); 
	// 'm' remains 'm'

//     return (0);
// }
