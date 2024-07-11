/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:18:32 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 19:58:00 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (big[i] == little[i] && little[i] && i <= len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (NULL);
}

/* check if little is empty */
/* return big */
/* loop over big */
/* while current character of big is equal to the corresponding
 * character in little */
/* check if we have the complete little */
/* }
int	main(void)
{
	char big[] = "DARECHIDARECZEKN";
	char little[] = "ARECZEK";
	// char big[] = "1231231231234923444123444";
	// char little[] = "123444";
	size_t len = 50;

	char    *p;
	p = ft_strnstr(big, little, len);
	printf("%s\n - moja\n", p);
	printf("%s\n - oryg\n", strnstr(big, little, len));
	return (0);
} */