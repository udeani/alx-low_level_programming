#include <unistd.h>
#include "main.h"

int _puchar(char c)
{
	return(write(1, &c, 1));
}
