#include "dog.h"
#include <stdio.h>

/**
*print_dog - Prints the details of a dog structure
*@d: Pointer to the dog structure to print
*This function prints the name, age, and owner of the dog.
*If any of the members are NULL, it prints "(nil)" for that member.
*Return: void
*/ 

void print_dog(struct dog *d)
{

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);

if (d->age < 0) 
{
	printf("Age: (nil)\n");
}
else if (d->age == 0.0	)
{
	printf("Age: (nil)\n");
}
else
{
	printf("Age: %.1f\n", d->age);
}

if (d->owner == NULL)
{
	printf("Owner: (nil)\n");
}
else
{
	printf("Owner: %s\n", d->owner);
}
}
