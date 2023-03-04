/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:21:31 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/28 17:15:48 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_placeholder(char format, va_list args)
{
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (format == 's')
		return (print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (format == 'i' || format == 'd')
		return (print_int(va_arg(args, int)));
	else if (format == 'u')
		return (print_unsigned(va_arg(args, int)));
	else if (format == 'x' || format == 'X')
		return (print_hex((unsigned int) va_arg(args, int), format));
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else
	{
		ft_putchar_fd(format, 1);
		return (1);
	}
}

int	ft_printf(const char *placeholder, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, placeholder);
	i = 0;
	counter = 0;
	while (placeholder[i])
	{
		if (placeholder[i] != '%')
		{
			counter++;
			ft_putchar_fd(placeholder[i], 1);
			i++;
			continue ;
		}
		counter += check_placeholder(placeholder[++i], args);
		i++;
	}
	return (counter);
}
