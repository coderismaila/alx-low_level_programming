#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: who owns the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
