#ifndef __LIST__DOUBLY
#define __LIST__DOUBLY
#include <stddef.h>
#include <stdlib.h>

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

typedef enum Bool
{
	false,
	true
} Bool;

typedef struct dlist
{
	int length;
	struct dlistint_s *begin;
	struct dlistint_s *end;
} *dlist;


dlist new_dlist(void);
Bool is_empty_dlist(dlist li);
dlist dlist_length(dlist li);
size_t print_dlistint(const dlistint_t *h);


#endif
