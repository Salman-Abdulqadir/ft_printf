/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:42:44 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/03/04 12:02:34 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	print_char(char c);
int	print_hex(unsigned long long n, char type);
int	print_int(int c);
int	print_str(char *str);
int	print_ptr(void *ptr);
int	print_unsigned(unsigned int c);
int	ft_printf(const char *placeholder, ...);

#endif
