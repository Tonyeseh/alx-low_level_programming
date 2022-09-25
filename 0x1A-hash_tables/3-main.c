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
    if (!hash_table_set(ht, "hetairas", "cool"))
	    printf("done");
    if (hash_table_set(ht, "mentioner", "cool"))
	    printf("added");
    if (hash_table_set(ht, "heliotropes", "cool"))
	    printf("added");
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
    return (EXIT_SUCCESS);
}
