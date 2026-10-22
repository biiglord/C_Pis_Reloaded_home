/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:43:06 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 10:43:17 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	num = 20;

// 	printf("The factorial of %d is %d\n", num, ft_iterative_factorial(num));
// 	return (0);
// }