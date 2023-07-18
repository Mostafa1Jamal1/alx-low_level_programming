#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dogs
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the dog's owner name.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* ifndef DOG_H */