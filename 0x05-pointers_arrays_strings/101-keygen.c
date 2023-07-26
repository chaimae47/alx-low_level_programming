#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 28

/**
* generate_password - Generates a random valid password.
*
* Return: Pointer to the generated password.
*/
char *generate_password()
{
static char password[PASSWORD_LENGTH + 1]; 
const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{};:'\",.<>?";
srand(time(NULL)); 
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0'; 
return password;
}
int main(void)
{
printf("%s\n", generate_password());

return (0);
}
