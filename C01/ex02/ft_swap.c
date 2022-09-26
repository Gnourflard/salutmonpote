/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:18:55 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/22 16:14:29 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	test;

	test = *a;
	*a = *b;
	*b = test;
}
/*
int	main()

{
	int	oui;	int	non;

	oui = 6;
	non = 4;

	ft_swap(&oui, &non);
	printf("%d \n", oui);
	printf("%d", non);
}
*/
