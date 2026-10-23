/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:37:43 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/23 12:15:07 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	char	w;

// 	if (nb == -2147483648)
// 	{
// 		write(1, "-", 1);
// 		write(1, "2147483648", 10);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb <= 9 && nb >= 0)
// 	{
// 		w = nb + '0';
// 		write(1, &w, 1);
// 	}
// 	if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// }

// // ONLY FOR TESTING PURPOSES
// int global_total = 0;

// void	add_up(int num)
// {
// 	global_total = global_total + num;
// }

// void	multiply(int num)
// {
// 	global_total = global_total * 10 + num;
// }

// int	main(void)
// {
// 	// int	arr[]= {8, 3, 4, 6, 7};
// 	ft_foreach(NULL, 0, multiply);
// 	ft_putnbr(global_total);
// 	return (0);
// }
