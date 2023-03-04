/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:22:30 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/28 15:51:09 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *ptr)
{
	int	count;

	count = 0;
	count += print_str("0x");
	count += print_hex((unsigned long long) ptr, 'x');
	return (count);
}
