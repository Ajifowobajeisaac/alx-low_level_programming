#ifndef DOG_G_
#define DOG_G_

/**
 * struct dog - struct containinf details of dogs.
 * @name:  name of dog.
 * @owner: owner of dog.
 * @age: age of the dog.
 */



struct dog
{
	char *name;
	char *owner;
	float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
