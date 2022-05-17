/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/17 00:47:25 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function looks for a character within a string pointer.
Returns pointer to location of the character.
Compares each character in string. Returns pointer first time it is the same.
*/

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != ch)
	{
		if (str[i] == ch)
			return ((char *) &str[i]);
		i++;
	}
	return ((char *) &str[i]);
}

/* Test
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Word";
	char	ch = 'o';

	printf("----|----|----|----\n");
	printf("String: %s, Address: %x\nChar:   %c, Address: %x\n",
			str, &str, ch, &ch);
	printf("Search address: %x\n", &ft_strchr(str, ch));
	return (0);
}
//*/