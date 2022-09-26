/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_horizontal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:14:55 by rleger            #+#    #+#             */
/*   Updated: 2022/09/17 12:58:30 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_horizontal(int a, char left, char mid, char right)
{
	if (a == 1)
	{
		ft_putchar(left);
		ft_putchar('\n');
	}
	else if (a == 2)
	{
		ft_putchar(left);
		ft_putchar(right);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(left);
		a--;
		while (a >= 2)
		{
			ft_putchar(mid);
			a--;
		}
		ft_putchar(right);
		ft_putchar('\n');
	}
}
