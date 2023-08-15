#ifndef DOG_H
#define DOG_H

typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
void free_dog(dog_t *d);
#endif /* DOG_H */
