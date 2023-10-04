#include <stdlib.h>

/**
* count_words - Counts the number of words in a string
* @str: The string to count
*
* Return: The number of words, or 0 if str is NULL or empty
*/
int count_words(char *str)
{
int i, count, in_word;

if (str == NULL || str[0] == '\0')
return (0);

in_word = 0;
count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
}
return (count);
}

/**
* copy_word - Copies a word from a string into a new string
* @str: The source string
* @start: The starting index of the word in the source string
* @end: The ending index of the word in the source string
*
* Return: A pointer to the new string, or NULL if it fails
*/
char *copy_word(char *str, int start, int end)
{
char *word;
int i, j;

word = malloc(sizeof(char) * (end - start + 2));
if (word == NULL)
return (NULL);

j = 0;
for (i = start; i <= end; i++)
{
word[j] = str[i];
j++;
}
word[j] = '\0';
return (word);
}

/**
* strtow - Splits a string into words
* @str: The string to split
*
* Return: A pointer to an array of strings (words),
* or NULL if it fails
*/
char **strtow(char *str)
{
char **tab;
int i, j, k, nwords, start, end;

nwords = count_words(str);
if (nwords == 0)
return (NULL);

tab = malloc(sizeof(char *) * (nwords + 1));
if (tab == NULL)
return (NULL);

j = 0;
k = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && j == 0)
{
start = i;
j = 1;
}
if ((str[i] == ' ' || str[i + 1] == '\0') && j == 1)
{
end = i;
j = 0;
tab[k] = copy_word(str, start, end);
if (tab[k] == NULL)
{
while (k >= 0)
{
free(tab[k]);
k--;
}
free(tab);
return (NULL);
}
k++;
}
}
tab[k] = NULL;
return (tab);
}
