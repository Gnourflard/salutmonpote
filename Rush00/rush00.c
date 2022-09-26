/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:50:06 by amonier           #+#    #+#             */
/*   Updated: 2022/09/17 18:49:57 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_vertical(int a, int b, char bord, char mid);
void	ft_horizontal(int a, char left, char mid, char right);
char	*ft_define(int n);

void	rush(int a, int b)
{
	int		sub;
	char	*tab;

	sub = 3;
	tab = ft_define(sub);
	if (b < 0 || a < 0)
		write(1, "BIEN ESSAYE!", 12);
	else if (b == 0 || a == 0)
		write(1, "CARRE INEXISTANT", 16);
	else if (b == 1)
		ft_horizontal(a, tab[0], tab[1], tab[2]);
	else if (b == 2)
	{
		ft_horizontal(a, tab[0], tab[1], tab[2]);
		ft_horizontal(a, tab[4], tab[1], tab[5]);
	}
	else
	{
		ft_horizontal(a, tab[0], tab[1], tab[2]);
		ft_vertical(a, b, tab[3], ' ');
		ft_horizontal(a, tab[4], tab[1], tab[5]);
	}
}
