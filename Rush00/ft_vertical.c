/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertical.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:28:32 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/17 18:52:50 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_vertical(int a, int b, char bord, char mid)
{
	int	i;

	b--;
	i = a;
	while (b > 1)
	{
		ft_putchar(bord);
		i--;
		while (i != 1 && a != 1)
		{
			ft_putchar(mid);
			i--;
		}
		if (a != 1)
			ft_putchar(bord);
		ft_putchar('\n');
		b--;
		i = a;
	}
}
