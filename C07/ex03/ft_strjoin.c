/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:59:49 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/11 21:44:42 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		k = 0;
		while (sep[k] && (i < (size -1)))
		{
			count++;
			k++;
		}
		i++;
	}
	return (count);
}

char	*ft_populate(int size, char **strs, char *sep, char *dsp)
{
	int	i;
	int	j;
	int	k;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dsp[count++] = strs[i][j++];
		k = 0;
		while (sep[k] && (i < (size -1)))
			dsp[count++] = sep[k++];
		i++;
	}
	dsp[count] = '\0';
	return (dsp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dsp;
	int		count;

	if (size == 0)
	{
		dsp = (char *)malloc(sizeof(char));
		dsp[0] = '\0';
		return (dsp);
	}
	count = ft_count(size, strs, sep);
	dsp = (char *)malloc(sizeof(char) * (count + 1));
	return (ft_populate(size, strs, sep, dsp));
}
