
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    for(i = 0; i < argc; ++i)
        printf("%s\n",argv[i+1]);

    return 0;
}
