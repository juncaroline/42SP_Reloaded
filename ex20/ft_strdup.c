/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:25:16 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/10/03 16:44:04 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*d;

	l = 0;
	while (src[l] != '\0')
		l++;
	d = (char *)malloc(sizeof(char) * (l + 1));
	if (d == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
