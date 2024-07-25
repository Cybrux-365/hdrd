#include <unistd.h>
#include <fcntl.h>
#include "lib.h"
int main (void)
{
    char dt[1024];
    data = dt;
    
    int fd;
    fd = open ("file", O_RDONLY);
    ptr = &fd;
    
    int x;
    x = read (*ptr, data, 1024);
    size = &x;

    write (1, data, *size);
}
