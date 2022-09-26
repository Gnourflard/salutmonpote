/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:29:57 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/25 16:32:49 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' || str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return(str);
}

int	main(void)

{
	char	str[] = "CACACACACA";
	printf("%s\n", ft_strlowcase(str));
}

