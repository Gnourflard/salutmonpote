/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:16:21 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/26 14:35:43 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 'a' || str[i] > 'z')
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
	printf("%d\n", ft_str_is_lowercase(""));
	return(0);
}
*/
