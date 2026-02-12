/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:12:34 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/07 11:40:06 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	u(char str)
{
	if (!(str >= 'A' && str <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	l(char str)
{
	if (!(str >= 'a' && str <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	n(char str)
{
	if (!(str >= '0' && str <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (l(str[0]))
		{
			str[0] -= 32;
		}
		else if (!l(str[i - 1]) && !u(str[i - 1]) && !n(str[i - 1]))
		{
			if (l(str[i]))
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
