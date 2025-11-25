/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cli_calc.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:27:17 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/25 12:42:51 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clicalc.hpp"

double	CliCalc::myexp(double nb1, double nb2)
{
	double	result;

	if (nb2 < 1)
		return (-1);
	result = nb1;
	while (--nb2)
		result *= nb1;
	return (result);
}

double	CliCalc::docalc(char **av)
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
