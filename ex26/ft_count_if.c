/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:41:49 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/23 01:34:17 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

// int	is_big(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	if (i > 3)
// 		return (1);
// 	else
// 		return (0);
// }

// int	is_always_one(char *str)
// {
// 	(void)str;
// 	return (1);
// }

// int	is_always_zero(char *str)
// {
// 	(void)str;
// 	return (0);
// }

// int	returns_two(char *str)
// {
// 	(void)str;
// 	return (2);
// }

// int	main(void)
// {
// 	char	*test1[] = {"hi", "hello", "yo", "world", 0};
// 	char	*test2[] = {0};
// 	char	*test3[] = {"", "a", 0};

// 	printf("Result for 1st test was %d,
//			expected 2\n", ft_count_if(test1, is_big));
// 	printf("Result for 2nd test was %d,
// 			expected 4\n", ft_count_if(test1, is_always_one));
// 	printf("Result for 3rd test was %d,
// 			expected 0\n", ft_count_if(test1, is_always_zero));
// 	printf("Result for 4th test was %d,
// 			expected 0\n", ft_count_if(test2, is_always_one));
// 	printf("Result for 5th test was %d,
//  		expected 2\n", ft_count_if(test3, is_always_one));
// 	printf("Result for 6th test was %d,
//			expected 0\n", ft_count_if(test1, returns_two));
// 	return (0);
// }
