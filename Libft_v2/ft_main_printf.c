/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:57:48 by gavivas-          #+#    #+#             */
/*   Updated: 2025/04/01 21:00:51 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include <stdio.h>

int main()
{
	int ret1;
	int ret2;

	// Test 9: Percentage OK %%
	ret1 = printf("Hello, world! %%\n");
	ret2 = ft_printf("Hello, world! %%\n");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 0: one character OK
	ret1 = printf("h\n");
	ret2 = ft_printf("h\n");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 8: Character OK
	ret1 = printf("Hello, world! %c\n", '4');
	ret2 = ft_printf("Hello, world! %c\n", '4');
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 1: simple string OK
	ret1 = printf("Hello, world!\n");
	ret2 = ft_printf("Hello, world!\n");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 2:integer OK
	ret1 = printf("Hello, world! %d\n", 42);
	ret2 = ft_printf("Hello, world! %d\n", 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 12: Normal string OK
	ret1 = printf("%s\n", "Hello, world!");
	ret2 = ft_printf("%s\n", "Hello, world!");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 6: Pointer OK
	ret1 = printf("Hello, world! %p\n", &ret1);
	ret2 = ft_printf("Hello, world! %p\n", &ret1);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 7: Unsigned integer OK
	ret1 = printf("Hello, world! %u\n", 42);
	ret2 = ft_printf("Hello, world! %u\n", 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 4: uppercase hexadecimal
	ret1 = printf("Hello, world! %X\n", 42);
	ret2 = ft_printf("Hello, world! %X\n", 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 5: Lowercase hexadecimal
	ret1 = printf("Hello, world! %x\n", 42);
	ret2 = ft_printf("Hello, world! %x\n", 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 11: String with special characters
	ret1 = printf("Hello, world! %d %s %x %p %c %u %s\n", 42, "42", 42, &ret1, '4', 42, "Hello, world!");
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u %s\n", 42, "42", 42, &ret1, '4', 42, "Hello, world!");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 3: string with format specifiers
	ret1 = printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 10: Multiple format specifiers
	ret1 = printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 13: Multiple format specifiers
	ret1 = printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u\n", 42, "42", 42, &ret1, '4', 42);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 14: null string
	ret1 = printf("%s\n", NULL);
	ret2 = ft_printf("%s\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 15: null character
	ret1 = printf("%c\n", NULL);
	ret2 = ft_printf("%c\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 16: null pointer
	ret1 = printf("%p\n", NULL);
	ret2 = ft_printf("%p\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 17: null integer
	ret1 = printf("%d\n", NULL);
	ret2 = ft_printf("%d\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 18: null unsigned integer
	ret1 = printf("%u\n", NULL);
	ret2 = ft_printf("%u\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 19: null hexadecimal
	ret1 = printf("%x\n", NULL);
	ret2 = ft_printf("%x\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 20: null uppercase hexadecimal
	ret1 = printf("%X\n", NULL);
	ret2 = ft_printf("%X\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 21: null percentage
	ret1 = printf("%%\n", NULL);
	ret2 = ft_printf("%%\n", NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 22: null string with format specifiers
	ret1 = printf("Hello, world! %d %s %x %p %c %u\n", NULL, NULL, NULL, NULL, NULL, NULL);
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u\n", NULL, NULL, NULL, NULL, NULL, NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 23: null string with special
	ret1 = printf("Hello, world! %d %s %x %p %c %u %s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ret2 = ft_printf("Hello, world! %d %s %x %p %c %u %s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 24:zero integer
	ret1 = printf("Hello, world! %d\n", 0);
	ret2 = ft_printf("Hello, world! %d\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 25: zero unsigned integer
	ret1 = printf("Hello, world! %u\n", 0);
	ret2 = ft_printf("Hello, world! %u\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 26: zero hexadecimal
	ret1 = printf("Hello, world! %x\n", 0);
	ret2 = ft_printf("Hello, world! %x\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// test 27: nil pointer
	ret1 = printf("Hello, world! %p\n", 0);
	ret2 = ft_printf("Hello, world! %p\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 28: nil string
	ret1 = printf("%s\n", 0);
	ret2 = ft_printf("%s\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 29: nil character
	ret1 = printf("%c\n", 0);
	ret2 = ft_printf("%c\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 30: nil unsigned integer
	ret1 = printf("%u\n", 0);
	ret2 = ft_printf("%u\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 31: nil hexadecimal
	ret1 = printf("%x\n", 0);
	ret2 = ft_printf("%x\n", 0);
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 32: percentage end
	ret1 = printf("\nHello, world! Test 32");
	ret2 = ft_printf("\nHello, world! Test 32");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	// Test 33: percentage end with character
	ret1 = printf("\nHello, world! Test 33 % bv");
	ret2 = ft_printf("\nHello, world! Test 33 % bv");
	printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

	int i = 42;
	while (i <= 100)
	{
		ret1 = printf("%i\n", NULL, i);
		ret2 = ft_printf("%i\n", NULL, i);
		printf("ret1=%d\nret2=%d\n\n", ret1, ret2);

		i += 70;
	}

	// Test 35: string null
	ret1 = printf(NULL);
	ret2 = ft_printf(NULL);
	printf("\nret1=%d , ret2=%d\n", ret1, ret2);
	return (0);
}