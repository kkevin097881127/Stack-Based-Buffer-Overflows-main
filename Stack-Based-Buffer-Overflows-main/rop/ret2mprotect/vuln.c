#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){

    char buffer[260];
    int len, i;
    printf("Welcome in Birby Enterprise\n");
    printf("To join the company, please register with your full name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = 0;
    printf("Welcome %s in Birby Enterprise\n", buffer);

    return 0;

}
