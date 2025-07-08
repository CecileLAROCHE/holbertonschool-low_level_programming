#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
*new_dog - Creates a new dog structure
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*
*This function allocates memory for a new dog structure,
*initializes its members with the provided values, and returns
*a pointer to the newly created dog structure.
*
*Return: Pointer to the newly created dog structure, or NULL on failure.
*/

dog_t *new_dog(char *name, float age, char *owner)

{
    dog_t *dog;
    char *name_copy;
    char *owner_copy;

dog = malloc(sizeof(dog_t));;
if (dog == NULL)
    return (NULL); 
    
name_copy = malloc(sizeof(name));   
if (name_copy == NULL)
    {
        free(dog);
        return (NULL);
    }
strcpy(name_copy, name);

owner_copy = malloc(sizeof(owner));
if (owner_copy == NULL)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }
strcpy(owner_copy, owner);

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

    return (dog);
}
