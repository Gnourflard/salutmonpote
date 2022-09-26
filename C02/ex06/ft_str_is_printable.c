/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:16:46 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/26 14:37:43 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 32 || str[i] > 126)
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
	printf("%d\n", ft_str_is_printable(""));
	return(0);
}
*/
