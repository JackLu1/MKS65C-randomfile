#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(){

    int * arr = malloc(40);

    int dev = open( "/dev/random", O_RDONLY );
    // printf("%d\n", dev);
    // printf("error %d\n", errno);
    // perror("error");

    int r = read(dev, arr, 40);
    printf("%d\n", dev);
    printf("error %d\n", errno);
    perror("error");

    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
