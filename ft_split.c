/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:05:42 by aet-tale          #+#    #+#             */
/*   Updated: 2024/03/28 15:02:54 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static void	free_str(char	**str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
}

int is_space(char s)
{
	if ((s>=9 && s<=13) || s == ' ')
		return (1);
	return (0);
}

static char	*returning_string(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (!is_space(s[i]) && s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (!is_space(s[i]) && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	counting_words(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0; 
	while (s[i])
	{
		while (is_space(s[i]) && s[i])
			i++;
		if (!is_space(s[i]) && s[i])
		{
			while (!is_space(s[i]) && s[i])
				i++;
			j++;
		}
	}
	return (j);
}

static char	**ft_strs(char **str, char *s, int j)
{
	int	i;
	i = 0;
	while (s[i])
	{
		while (is_space(s[i]) && s[i])
			i++;
		if (!is_space(s[i]) && s[i])
		{
			str[j] = returning_string((char *)&s[i]);
			if (!str[j])
			{
				free_str(str, j);
				free(str);
				return (NULL);
			}
			while (!is_space(s[i]) && s[i])
				i++;
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s)
{
	// int		i;
	char	**str;

	if (!s)
		return (NULL);
	// i = 0;
	str = malloc(sizeof(char *) * (counting_words((char *)s) + 1));
	if (!str)
		return (NULL);
	return (ft_strs(str, (char *)s, 0));
}

// int main(void)
// {
// 	int i =0;
// 	char **str = ft_split("hello my name is anwar aap \t \napapa");
// 	while(i<7)
// 	{
// 		printf("%s\n",str[i]);
// 		i++;
// 	}
// }