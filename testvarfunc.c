/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testvarfunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:43:37 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/11 09:46:55 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
	int Sum = 0;

	// Declaring pointer to the
	// argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		// Accessing current variable
		// and pointing to next one
		Sum += va_arg(ptr, int);
		printf("\n---Sum: %i\n", Sum);

	// Ending argument list traversal
	va_end(ptr);

	return Sum;
}

// Driver Code
int main()
{
	printf("\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n 1 + 2 = %d ",
			AddNumbers(2, 1, 2));

	printf("\n 3 + 4 + 5 = %d ",
			AddNumbers(3, 3, 4, 5));

	printf("\n 6 + 7 + 8 + 9 = %d ",
			AddNumbers(4, 6, 7, 8, 9));

	printf("\n");

	return 0;
}
