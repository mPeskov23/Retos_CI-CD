/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_challenge02.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:37:50 by mpeskov           #+#    #+#             */
/*   Updated: 2025/12/15 17:11:11 by mpeskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "starter.h"
#include <stdio.h>
#include <assert.h>

void	test_sum_positives()
{
	assert(suma(5, 3) == 8);
}

void	test_sum_positive_negative()
{
	assert(suma(5, -3) == 2);
}

void	test_sum_negatives()
{
	assert(suma(-5, -3) == -8);
}

void	test_sum_zero()
{
	assert(suma(5, 0) == 5);
}

void	test_sum_zeros()
{
	assert(suma(0,0) == 0);
}

void	test_sum_suite()
{
	printf("STARTING SUM TESTS\n");
	test_sum_positives();
	printf("test_sum_positives passed\n");
	test_sum_positive_negative();
	printf("test_sum_positive_negative passed\n");
	test_sum_negatives();
	printf("test_sum_negatives passed\n");
	test_sum_zero();
	printf("test_sum_zero passed\n");
	test_sum_zeros();
	printf("test_sum_zeros passed\n");
	printf("SUM TESTS PASSED\n__________________________________________\n\n");
}

void	test_rest_positives()
{
	assert(resta(5, 3) == 2);
}

void	test_rest_positive_negative()
{
	assert(resta(5, -3) == 8);
}

void	test_rest_negatives()
{
	assert(resta(-5, -3) == -2);
}

void	test_rest_zero()
{
	assert(resta(5, 0) == 5);
}

void	test_rest_zeros()
{
	assert(resta(0, 0) == 0);
}

void	test_rest_suite()
{
	printf("STARTING REST TESTS\n");
	test_rest_positives();
	printf("test_rest_positives passed\n");
	test_rest_positive_negative();
	printf("test_rest_positive_negative passed\n");
	test_rest_negatives();
	printf("test_rest_negatives passed\n");
	test_rest_zero();
	printf("test_rest_zero passed\n");
	test_rest_zeros();
	printf("test_rest_zeros passed\n");
	printf("REST TESTS PASSED\n_________________________________\n\n");
}

void	test_mult_positives()
{
	assert(multiplicacion(5, 3) == 15);
	printf("test_mult_positives passed\n");
}

void	test_mult_positive_negative()
{
	assert(multiplicacion(5, -3) == -15);
	printf("test_mult_positive_negative_passed\n");
}

void	test_mult_negatives()
{
	assert(multiplicacion(-5, -3) == 15);
	printf("test_mult_negatives passed\n");
}

void	test_mult_zero()
{
	assert(multiplicacion(5, 0) == 0);
	printf("test_mult_zero passed\n");
}

void	test_mult_zeros()
{
	assert(multiplicacion(0, 0) == 0);
	printf("test_mult_zeros passed\n");
}

void	test_mult_suite()
{
	printf("STARTING MULT TESTS\n");
	test_mult_positives();
	test_mult_positive_negative();
	test_mult_negatives();
	test_mult_zero();
	test_mult_zeros();
	printf("ALL MULT TESTS PASSED\n_____________________________________\n\n");
}

void	test_div_positives()
{
	assert(division(5, 3) == 1);
	printf("test_div_positives passed\n");
}

void	test_div_positive_negative()
{
	assert(division(5, -3) == -1);
	printf("test_div_positive_negative passed\n");
}

void	test_div_negatives()
{
	assert(division(-5, -3) == 1);
	printf("test_div_negatives passed\n");
}

void	test_div_zero()
{
	assert(division(5,0) == 0);
	printf("test_div_zero passed\n");
}

void	test_div_zeros()
{
	assert(division(0, 0) == 0);
	printf("test_div_zeros passed\n");
}

void	test_div_suite()
{
	printf("STARTING DIV TESTS\n");
	test_div_positives();
	test_div_positive_negative();
	test_div_negatives();
	test_div_zero();
	test_div_zeros();
	printf("ALL DIV TESTS PASSED\n_______________________________________\n\n");
}

int	main(void)
{
	test_sum_suite();
	test_rest_suite();
	test_mult_suite();
	test_div_suite();
	printf("ALL TESTS PASSED!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n\n");
	return (0);
}

