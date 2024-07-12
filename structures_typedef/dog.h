#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: A pointer to a character (string) representing the dog's name
 * @age: A float representing the dog's age
 * @owner: A pointer to a character (string) representing the dog's owner
 *
 * Description: A structure that stores a dog's name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
