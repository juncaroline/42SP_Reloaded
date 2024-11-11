/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:06:20 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/10/04 16:39:57 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(char **av, int ord)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < ord - 1)
	{
		j = 1;
		while (j < ord - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort(av, ac - 1);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
