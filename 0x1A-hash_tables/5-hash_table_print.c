#include"hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *ptr;
    unsigned long int i; 
    char flag = 1;

    if (!ht)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        ptr = ht->array[i];
        while (ptr)
        {
            
                if (!flag)
                    printf(", ");
                flag = 0;
                printf("\'%s\' : \'%s\'", ptr->key, ptr->value);
            
            ptr = ptr->next;
        }
    }
    printf("}\n");
}
