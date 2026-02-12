/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:29:53 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/11 12:32:47 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (!(s1[i] == s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < (ac - 1))
	{
		j = 0;
		while (j < (ac - 1))
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				tmp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main2(int ac, char **av)
{
	int		i;
	char	c;

	i = 1;
	ft_sort_params(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		c = '\n';
		write(1, &c, 1);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%d", INT_MAX);
	return 0;
}
