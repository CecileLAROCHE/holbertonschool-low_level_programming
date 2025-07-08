#ifndef DOG
#define DOG
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

#endif