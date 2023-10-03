/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string
* @accept: pointer to the substring containing accepted characters
*
* Return: number of bytes in the initial segment of s
*         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;

while (*s != '\0')
{
found = 0;

/* Check if the current character is in the accept string */
while (*accept != '\0')
{
if (*s == *accept)
{
found = 1;
break;
}
accept++;
}

/* If the character is not in the accept string, stop the loop */
if (!found)
break;

count++;
s++;
accept = accept - count; 
}

return (count);
}
