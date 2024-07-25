#include <unistd.h>
#include <fcntl.h>
int main (void)
{
    int fd;
    fd = open ("file", O_WRONLY | O_CREAT );
    write (fd, "new \n", 5);
    return (0);
}
