/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:06:40 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/26 14:36:11 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 'A' || str[i] > 'Z')
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
	printf("%d\n", ft_str_is_uppercase(""));
	return(0);
}
*/
