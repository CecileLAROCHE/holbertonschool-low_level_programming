#ifndef dog_H
#define dog_H
#include <stdlib.h>

/**
*struct dog - Dog structure
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*This structure represents a dog with its name, age, and owner.
*/

struct dog
{
char* name;
float age;
char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif