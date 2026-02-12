/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:38:03 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/01/28 15:46:40 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			tmp = 1;
		else
			return (0);
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	char c[1];

	a = ft_str_is_uppercase(c);
	printf("%d", a);
	return (0);
}
*/
