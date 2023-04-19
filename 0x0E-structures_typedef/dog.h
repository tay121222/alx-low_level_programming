#ifndef DOGGIE
#define DOGGIE
/**
 * struct dog - Dog data
 * @name: Dog's name
 * @age: Dog's age
 * @owner:Dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} doggie;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
