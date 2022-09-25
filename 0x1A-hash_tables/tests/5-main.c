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
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "neurospora", "cool");
    hash_table_set(ht, "stylist", "cool");
    hash_table_set(ht, "serafins", "cool");
    hash_table_set(ht, "subgenera", "cool");
    hash_table_set(ht, "joyful", "cool");
    hash_table_set(ht, "synaphea", "cool");
    hash_table_set(ht, "redescribed", "cool");
    hash_table_set(ht, "urites", "cool");
    hash_table_set(ht, "dram", "cool");
    hash_table_set(ht, "vivency", "cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
