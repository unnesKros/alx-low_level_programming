#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s = strlen("That piece of art is useful\" - Dora Korpar, 2015-10-19\n");  
write(2,"That piece of art is useful\" - Dora Korpar, 2015-10-19\n",s);
return (1);
}
