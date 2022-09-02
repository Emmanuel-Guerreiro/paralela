#include <unistd.h>
#include <stdio.h>

int main()
{

    pid_t c_id = fork();
    pid_t d_id = fork();

    if (c_id == 0)
    {
        printf("Soy el padre\n");
    }
    else
    {
        printf("pid = %ld\n", (long)c_id);
    }
    return 0;
}