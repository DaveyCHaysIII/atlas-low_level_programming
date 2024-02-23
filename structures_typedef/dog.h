#ifndef DOG_H
#define DOG_H

/**
 * struct dog - its a dog
 * @name: name
 * @age: age
 * @owner: owner
 * * Description: its a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

#endif
