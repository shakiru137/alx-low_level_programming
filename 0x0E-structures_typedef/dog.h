#ifndef DOG_H
#define DOG_H
/**
 * struct dog - declaration.
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
 * Return: Nothing.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


#endif
