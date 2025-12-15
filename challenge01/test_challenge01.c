/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_challenge01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:57:06 by mpeskov           #+#    #+#             */
/*   Updated: 2025/12/15 16:17:14 by mpeskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <assert.h>
#include "starter.h"
#include <stdio.h>

void	test_sum_positives(void)
{
	assert(suma(5, 3) == 8);
}

void	test_sum_neg(void)
{
	assert(suma(5, -3) == 2);
}

void	test_sum_two_neg(void)
{
	assert(suma(-5, -3) == -8);
}

int	main(void)
{
	test_sum_positives();
	printf("Two positives sum test passed\n");
	test_sum_neg();
	printf("A positive and a negative test passed\n");
	test_sum_two_neg();
	printf("Two negatives sum test passed\n");
	printf("ALL TESTS PASSED!\n");
}
