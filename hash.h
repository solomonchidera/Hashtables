#ifndef hash_h
#define hash_h

#define TABLE_SIZE 100

typedef struct
{
    char* key;
    int value;
} HashEntry;

typedef struct
{
    HashEntry* entries[TABLE_SIZE];
} HashTable;

HashTable* createHashTable() {
    HashTable* table = (HashTable*)malloc(sizeof(HashTable));
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table->entries[i] = NULL;
    }
    return table;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#endif // hash_h
