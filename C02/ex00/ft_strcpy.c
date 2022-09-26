/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:52:53 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/26 14:31:17 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while(*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return dest;
}
/*
int	main(void)

{
	char	src[]= "salutmonpote";
	char	dest[]= "";
	printf("%s\n", ft_strcpy(dest,src));
	return (0);
}
*/
