/**
 * print_name - prints a name.
 * @name: name of person
 * @f: a pointer to a function that takes a pointer to a char
 * and return nothing
*/
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
