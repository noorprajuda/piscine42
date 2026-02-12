/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:14:43 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/10 19:18:39 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_absolut(int nb)
{
	if (nb < 0)
	{
		return (-nb);
	}
	return (nb);
}

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i < ft_absolut(power))
		{
			n = n * nb;
			i++;
		}
	}
	return (n);
}
