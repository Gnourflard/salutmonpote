/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:12:23 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/25 16:28:25 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' || str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return(str);
}

/*
int	main(void)

{
	char	str[] = "cacacacaca";
	printf("%s\n", ft_strupcase(str));
}
*/
