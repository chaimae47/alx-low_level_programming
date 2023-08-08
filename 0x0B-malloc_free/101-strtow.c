#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words in.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
int count = 0, in_word = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
in_word = 1;
count++;
}
}
else
{
in_word = 0;
}
}

return (count);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
if (str == NULL || str[0] == '\0')
return (NULL);

int word_count = count_words(str);
char **words = (char **)malloc((word_count + 1) * sizeof(char *));

if (words == NULL)
return (NULL);

int word_index = 0, word_length = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
word_length++;
if (word_length == 1 || (i > 0 && str[i - 1] == ' '))
{
words[word_index] = (char *)malloc(word_length * sizeof(char));
if (words[word_index] == NULL)
{
for (int j = 0; j < word_index; j++)
free(words[j]);
free(words);
return (NULL);
}
word_index++;
}
}
else
{
word_length = 0;
}
}

word_index = 0;
word_length = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
words[word_index][word_length] = str[i];
word_length++;
if (word_length == 1 || (i > 0 && str[i - 1] == ' '))
{
words[word_index][word_length] = '\0';
word_index++;
}
}
else
{
word_length = 0;
}
}

words[word_count] = NULL;

return (words);
}
