/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:44:30 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/10/03 13:56:37 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int i);

void	ft_print_numbers( void )
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}
