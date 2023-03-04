/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:59:37 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/28 15:26:55 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_str(char *str)
{
	if (str)
	{
		ft_putstr_fd(str, 1);
		return ((int) ft_strlen(str));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
