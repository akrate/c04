/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:10:19 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/09 13:39:58 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_str(char *str)
{
	write(1, str, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	else if (nb < 0)
	{
		put_str('-');
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		put_str(nb);
}
