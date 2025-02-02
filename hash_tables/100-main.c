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
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "d", "5");
    shash_table_print(ht);
    shash_table_set(ht, "m", "6");
    shash_table_print(ht);
    shash_table_set(ht, "z", "7");
    shash_table_print(ht);
    shash_table_set(ht, "w", "8");
    shash_table_print(ht);
    shash_table_set(ht, "l", "9");
    shash_table_print(ht);
    shash_table_set(ht, "a", "A");
    shash_table_print(ht);
    shash_table_set(ht, "k", "B");
    shash_table_print(ht);
    shash_table_set(ht, "x", "C");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
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
