/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:12:34 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/01/26 16:49:53 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	h;
	int	t;
	int	u;

	i = 0;
	while (i < 790)
	{
		h = (i / 100) % 10 + '0';
		t = (i / 10) % 10 + '0';
		u = i % 10 + '0';
		if ((h < t) && (t < u))
		{
			write(1, &h, 1);
			write(1, &t, 1);
			write(1, &u, 1);
			if (h == '7' && t == '8' && u == '9' )
				write(1, "\0", 1);
			else
				write(1, ", ", 2);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
