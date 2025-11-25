/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clicalc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:32:46 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/25 12:41:53 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class CliCalc
{
    double	myexp(double nb1, double nb2);
    public:
        double	docalc(char **av);  
};
