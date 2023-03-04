/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:35:53 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/28 16:40:37 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_hex(unsigned long long n, char type)
{
	char	*digits;
	int		count;

	count = 0;
	digits = "0123456789ABCDEF";
	if (type == 'x')
		digits = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar_fd(digits[n], 1);
		return (1);
	}
	else
		count += print_hex(n / 16, type);
	count += print_hex(n % 16, type);
	return (count);
}

// #include <stdio.h>
// int	main()
// {
// 	int i = printf("%x", 16);
// 	printf("\n%d\n", i);
// 	printf("%d", print_hex(16, 'x'));
// 	return 0;
// }
