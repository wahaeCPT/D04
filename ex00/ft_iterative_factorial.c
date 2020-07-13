/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:13:41 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/13 13:25:41 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb) {
	int fact;
	fact = 1;

	if(nb<0){
		return (0);
	}
	else if (nb>12) {
		return (0);
	}
	while (nb >=1) {
		fact = fact *nb;
			nb  -=1;
	}
	return (fact);
}
