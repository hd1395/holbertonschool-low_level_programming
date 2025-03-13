#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog.
 *
 * @d: struct dog to print.
 *
 * Return: pointer to a new array with numbers from min to max
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %0.6f\n", d->age);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
