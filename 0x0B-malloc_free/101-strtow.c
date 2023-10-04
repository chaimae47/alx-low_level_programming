#include <stdlib.h>

/**
* count_words - Counts the number of words in a string
* @str: The string to count
*
* Return: The number of words, or 0 if str is NULL or empty
*/
#include <stdlib.h>
#include <stdio.h>

int countWords(const char *str) {
int count = 0;
int inWord = 0;

while (*str) {
if (*str == ' ') {
inWord = 0;
} else {
if (!inWord) {
count++;
inWord = 1;
}
}
str++;
}

return (count);
}

char *strdupPartial(const char *start, const char *end) {
int len = end - start;
char *word = (char *)malloc(len + 1);

if (word) {
strncpy(word, start, len);
word[len] = '\0';
}

return (word);
}

char **strtow(char *str) {
if (str == NULL || *str == '\0') 
return (NULL);

int numWords = countWords(str);
char **result = (char **)malloc((numWords + 1) * sizeof(char *));

if (result == NULL) 
return (NULL);

int inWord = 0;
int wordIndex = 0;
char *wordStart = str;

while (*str) {
if (*str == ' ') {
if (inWord) {
char *word = strdupPartial(wordStart, str);
if (word) result[wordIndex++] = word;
inWord = 0;
}
} else {
if (!inWord) {
wordStart = str;
inWord = 1;
}
}
str++;
}

if (inWord) {
char *word = strdupPartial(wordStart, str);
if (word) result[wordIndex++] = word;
}

result[wordIndex] = NULL;

return (result);
}

int main(void) {
char **tab;
tab = strtow("      ALX School         #cisfun      ");

if (tab == NULL) 
return (1);

for (int i = 0; tab[i] != NULL; ++i) {
printf("%s\n", tab[i]);
free(tab[i]);
}

free(tab);
return (0);
}
