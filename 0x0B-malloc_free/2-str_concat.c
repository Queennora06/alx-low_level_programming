Alx Malloc
Task 0


#include <stdio.h>

#include <stdlib.h>

/**

 * create_array - creates an array of chars, and initializes it with a char.

 * @size: the size of the array

 * @c: the char to initialize with

 * Return: char *

 */

char *create_array(unsigned int size, char c)

{

        unsigned int i;

        char *array;

        if (size == 0)

                return (NULL);

        array = malloc(size * sizeof(char));

        if (array == NULL)

        {

                return (NULL);

        }

        for (i = 0; i < size; i++)

        {

                array[i] = c;

        }

        return (array);

}



Task 1


#include <stdio.h>

#include <stdlib.h>

/**

 * _strdup - malloc new str and copy *str into it

 * @str: the string we copy

 * Return: pointer to new string

 */

char *_strdup(char *str)

{

        unsigned int i;

        int count = 0;

        char *dest;

        if (str == NULL)

                return (NULL);

        for (i = 0; str[i]; i++)

        {

                count++;

        }

        count += 1;

        dest = malloc(count * sizeof(char));

        if (dest == NULL)

        {

                return (NULL);

        }

        for (i = 0; str[i] != '\0'; i++)

        {

                dest[i] = str[i];

        }

        dest[i] = str[i];

        return (dest);

}


Task 2


#include <stdio.h>

#include <stdlib.h>

/**

  *_strlen - counts and returns string length

  * @s: that's the string

  *

  * Return: the length

  */

int _strlen(char *s)

{

int counter = 0;

if (!*s)

        return (0);

while (*s)

{

        counter++;

        s++;

}

return (counter);

}

/**

 * str_concat - concatenates two strings

 * @s1: one string

 * @s2: the other

 * Return: pointer to cat string

 */

char *str_concat(char *s1, char *s2)

{

        char *new;

        unsigned int i;

        unsigned int j;

        int total = 0;

        if (!s1)

                s1 = "";

        if (!s2)

                s2 = "";

        total += _strlen(s1) + _strlen(s2);

        new = malloc((total * sizeof(char)) + 1);

        if (new == NULL)

        {

                return (NULL);

        }

        for (i = 0; s1[i]; i++)

        {

                new[i] = s1[i];

        }

        for (j = 0; s2[j]; j++, i++)

        {

                new[i] = s2[j];

        }

        new[i] = '\0';

        return (new);

}
