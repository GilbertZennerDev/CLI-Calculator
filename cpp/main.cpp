/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:34:09 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/25 12:42:37 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clicalc.hpp"

int	main(int ac, char **av)
{
	CliCalc calc = CliCalc();
	if (ac == 4)
		printf("%f\n", calc.docalc(av));
	return (0);
}
