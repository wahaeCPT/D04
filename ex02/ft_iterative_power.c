/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:55:49 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/13 16:56:23 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power, int n)
{
	int i;

	i = 2;
	while (i <= power)
	{
		n *= nb;
		i++;
	}
	return (n);
}

int	ft_iterative_power(int nb, int power)
{
	int i;
	int n;
	int sign;

	n = 0;
	sign = 1;
	i = 2;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		if (n < 0)
		{
			sign = -1;
			n = -nb;
		}
		else
			n = nb;
		n = ft_power(nb, power, n);
		return (sign * n);
	}
	else
		return (0);
}
