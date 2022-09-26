/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:28:05 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/17 15:02:51 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_define(int n)
{
	if (n == 0)
		return ("o-o|oo");
	else if (n == 1)
		return ("/*\\*\\/");
	else if (n == 2)
		return ("ABABCC");
	else if (n == 3)
		return ("ABCBAC");
	else if (n == 4)
		return ("ABCBCA");
	return ("o-o|oo");
}
