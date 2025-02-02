#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht1, *ht2;

	ht1 = shash_table_create(1024);
	shash_table_set(ht1, "hetairas", "1");
	shash_table_print(ht1);
	shash_table_set(ht1, "heliotropes", "4");
	shash_table_print(ht1);
	shash_table_set(ht1, "dram", "5");
	shash_table_print(ht1);
	shash_table_set(ht1, "mentioner", "6");
	shash_table_print(ht1);
	shash_table_set(ht1, "neurospora", "7");
	shash_table_print(ht1);
	shash_table_set(ht1, "redescribed", "8");
	shash_table_print(ht1);
	shash_table_set(ht1, "serafines", "9");
	shash_table_print(ht1);
	shash_table_set(ht1, "depravement", "A");
	shash_table_print(ht1);
	shash_table_set(ht1, "joyful", "B");
	shash_table_print(ht1);
	shash_table_set(ht1, "synaphea", "C");
	shash_table_print(ht1);
	shash_table_set(ht1, "vivency", "B");
	shash_table_print(ht1);
	shash_table_set(ht1, "urites", "C");
	shash_table_print(ht1);
	shash_table_print_rev(ht1);
        shash_table_delete(ht1);

	ht2 = shash_table_create(1024);
	shash_table_set(ht2, "y", "0");
	shash_table_print(ht2);
	shash_table_set(ht2, "j", "1");
	shash_table_print(ht2);
	shash_table_set(ht2, "c", "2");
	shash_table_print(ht2);
	shash_table_set(ht2, "b", "3");
	shash_table_print(ht2);
	shash_table_set(ht2, "z", "4");
	shash_table_print(ht2);
	shash_table_set(ht2, "n", "5");
	shash_table_print(ht2);
	shash_table_set(ht2, "a", "6");
	shash_table_print(ht2);
	shash_table_set(ht2, "m", "7");
	shash_table_print(ht2);
	shash_table_print_rev(ht2);
        shash_table_delete(ht2);
    return (EXIT_SUCCESS);
}

/*
	hetairas collides with mentioner
	heliotropes collides with neurospora
	depravement collides with serafins
	stylist collides with subgenera
	joyful collides with synaphea
	redescribed collides with urites
	dram collides with vivency

   command to run: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht

   Expected output:

	{'y': '0'}
	{'j': '1', 'y': '0'}
	{'c': '2', 'j': '1', 'y': '0'}
	{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
	{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
	{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
	{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
	{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
	{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
 */
