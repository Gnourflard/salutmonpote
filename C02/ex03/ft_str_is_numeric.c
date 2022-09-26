/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:31:37 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/26 14:35:18 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < '0' || str[i] > '9')
		{
			return(0);
		}
		i++;
	}
	return(1);
}
/*
int	main(void)

{
	printf("%d\n", ft_str_is_numeric("5"));
	return(0);
}
*/
