/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:49:35 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/01/27 14:04:32 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 5;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
	return (0);
}
*/