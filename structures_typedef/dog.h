#ifndef Dog_structure
#define Dog_structure
/**
 * struct dog - data of dogs
 * @name: pointer to string of name
 * @age: age of dog
 * @owner: pointer to string of owner
 *
 * Description:
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
#endif
