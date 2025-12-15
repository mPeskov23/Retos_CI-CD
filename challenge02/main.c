/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:32:23 by mpeskov           #+#    #+#             */
/*   Updated: 2025/12/15 16:37:32 by mpeskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "starter.h"
#include <stdio.h>

int	main()
{
	printf("Calculating with 5 and 3\n");
	printf("5 + 3 = %i\n", suma(5,3));
	printf("5 - 3 = %i\n", resta(5,3));
	printf("5 * 3 = %i\n", multiplicacion(5,3));
	printf("5 / 3 = %i\n", division(5,3));
	return (0);
}
