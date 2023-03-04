/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:52:16 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/28 16:46:11 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putunsigned(long n)
{
	if (n < 10)
	{
		ft_putchar_fd(n + '0', 1);
		return ;
	}
	else
		ft_putunsigned(n / 10);
	ft_putunsigned(n % 10);
}

int	print_unsigned(unsigned int c)
{
	int				i;
	unsigned int	n;

	n = c;
	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	ft_putunsigned(c);
	return (i);
}
