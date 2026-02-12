/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:30:23 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/10 17:38:15 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if ((!nb) || (nb < 0))
	{
		return (0);
	}
	while (nb >= 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
