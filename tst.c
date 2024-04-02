#include <stdlib.h>

int main(void)
{
    char *s = malloc(3);
    system("leaks a.out");
}