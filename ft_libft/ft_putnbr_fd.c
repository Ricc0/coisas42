/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:30:29 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:29 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_fd(int nb, int fd)
{
	char			c;
	int				unidade;
	unsigned int	number;
	unsigned int	number_copy;

	if (nb < 0)
	{
		number = nb * -1;
		write(fd, "-", 1);
	}
	else
		number = nb;
	unidade = 1;
	number_copy = number;
	while ((number_copy /= 10) > 0)
		unidade *= 10;
	while (unidade > 0)
	{
		c = (number / unidade) + '0';
		write(fd, &c, 1);
		number = number % unidade;
		unidade /= 10;
	}
}
