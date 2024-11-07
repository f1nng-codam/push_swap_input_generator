/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: fgroenew <fgroenew@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 15:59:23 by fgroenew      #+#    #+#                 */
/*   Updated: 2024/11/07 16:14:52 by fgroenew      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef TOTAL_NUMBERS
# define TOTAL_NUMBERS 500
#endif

#ifndef MAX_RANDOM
# define MAX_RANDOM 500
#endif

int main(void) {
	int	numbers[TOTAL_NUMBERS];
	int	count = 0;
	srand(time(NULL));
	while (count < TOTAL_NUMBERS) {
		int random_num = rand() % MAX_RANDOM;
		int unique = 1;
		for (int i = 0; i < count; i++) {
			if (numbers[i] == random_num) {
				unique = 0;
				break;
			}
		}
		if (unique)
			numbers[count++] = random_num;
	}
	for (int i = 0; i < TOTAL_NUMBERS; i++)
		printf("%d ", numbers[i]);
	return 0;
}