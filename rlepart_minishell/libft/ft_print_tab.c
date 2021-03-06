/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlepart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:11:28 by rlepart           #+#    #+#             */
/*   Updated: 2021/01/18 16:08:42 by rlepart          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_print_tab(char **str)
{
	while (str && ((*str) != NULL))
	{
		write(1, "<", 1);
		ft_putstr_fd(*str, 1);
		write(1, ">\n", 2);
		str++;
	}
	write(1, "\n", 1);
}
