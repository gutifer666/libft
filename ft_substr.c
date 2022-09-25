/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:27:21 by frgutier          #+#    #+#             */
/*   Updated: 2022/09/25 12:17:32 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;

// 	if (start >= ft_strlen(s))
// 		return (ft_strdup(""));
// 	i = 0;
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	while (i < len && s[start] != '\0')
// 	{
// 		str[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	max_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		max_len = ft_strlen(s);
	else
		max_len = len;
	newstr = (char *)malloc(sizeof(char) * (max_len + 1));
	if (!newstr)
		return (NULL);
	while (start < ft_strlen(s) && i < max_len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
