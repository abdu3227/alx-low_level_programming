#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to space mem
 * @s: string
 * Return: pointer
 */
char *_strdup(char *s)
{
	char *dp;
	unsigned int i = 0, j = 0;

	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i += 1;
	i++;
	dp = malloc(i * sizeof(*dp));
	if (dp == NULL)
		return (NULL);
	while (j < i)
	{
		dp[j] = s[j];
		j++;
	}
	return (dp);
}

/**
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner of the new dog
 * Return: instance of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nwdog;

	nwdog = malloc(sizeof(struct dog));
	if (nwdog == NULL)
		return (NULL);
	nwdog->name = _strdup(name);
	if (nwdog->name == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	nwdog->owner = _strdup(owner);
	if (nwdog->owner == NULL)
	{
		free(nwdog->name);
		free(nwdog);
		return (NULL);
	}
	nwdog->age = age;
	return (nwdog);
}
