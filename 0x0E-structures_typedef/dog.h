#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Data structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
