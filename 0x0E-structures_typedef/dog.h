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
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
