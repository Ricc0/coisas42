/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:07 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:09:06 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Transforms a number n into an allocated string.
*/

#include "libft.h"

size_t				contador_digitos(int n)
{
	size_t digitos_contados;

	digitos_contados = 1;
	while (n /= 10)
	{
		digitos_contados++;
	}
	return (digitos_contados);
}

static void			escrever_os_digitos(
	char *string, size_t digitos_contados, unsigned int numero, int is_negativo)
{
	string[digitos_contados] = '\0';
	while (digitos_contados--)
	{
		string[digitos_contados] = '0' + (numero % 10);
		numero /= 10;
	}
	if (is_negativo)
		string[0] = '-';
}

char				*ft_itoa(int n)
{
	size_t			digitos_contados;
	unsigned int	numero;
	unsigned int	is_negativo;
	char			*string;

	digitos_contados = contador_digitos(n);
	numero = (unsigned int)n;
	is_negativo = 0;
	if (n < 0)
	{
		numero *= -1;
		is_negativo = 1;
		digitos_contados++;
	}
	string = ((char *)malloc(digitos_contados + 1));
	if (!string)
		return (0);
	escrever_os_digitos(string, digitos_contados, numero, is_negativo);
	return (string);
}
