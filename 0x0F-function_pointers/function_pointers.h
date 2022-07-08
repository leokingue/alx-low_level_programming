#ifndef FUNCTION_POINTERS__H__
#define FUNCTION_POINTERS__H__

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif/*prototypes*/
