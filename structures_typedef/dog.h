#ifndef DOG
#define DOG
#include <stdlib.h>

/**
*struct dog - Dog structure
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
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
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
