/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:43:01 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/23 14:29:07 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c != 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('z');
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
