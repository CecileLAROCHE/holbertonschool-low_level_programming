#include <dog.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * This function allocates memory for a new dog structure,
 * initializes its members with the provided values, and returns
 * a pointer to the newly created dog structure.
 *
 * Return: Pointer to the newly created dog structure, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner);