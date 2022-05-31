#ifndef DOG_G_
#define DOG_G_

/**
 * struct dog - struct containing details of dogs.
 * @name:  name of dog.
 * @owner: owner of dog.
 * @age: age of the dog.
 */



struct dog
{
	char *name;
	char *owner;
	float age;
}dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
