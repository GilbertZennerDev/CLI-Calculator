/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cli_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:27:17 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/25 12:31:07 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double	myexp(double nb1, double nb2)
{
	double	result;

	if (nb2 < 1)
		return (-1);
	result = nb1;
	while (--nb2)
		result *= nb1;
	return (result);
}

double	docalc(char **av)
{
	double	nb1;
	double	nb2;

	nb1 = atof(av[1]);
	nb2 = atof(av[3]);
	if (strcmp(av[2], "+") == 0)
		return (nb1 + nb2);
	if (strcmp(av[2], "-") == 0)
		return (nb1 - nb2);
	if (strcmp(av[2], "*") == 0)
		return (nb1 * nb2);
	if (strcmp(av[2], "**") == 0)
		return (myexp(nb1, nb2));
	if (strcmp(av[2], "/") == 0)
		return (nb1 / nb2);
	return (-999.999);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%f\n", docalc(av));
	return (0);
}
