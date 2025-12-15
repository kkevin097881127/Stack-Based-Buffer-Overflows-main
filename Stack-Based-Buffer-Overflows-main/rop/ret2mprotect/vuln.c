#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    char buffer[260];
    int len, i;
    printf("Welcome in Birby Enterprise\n");
    printf("To join the company, please register with your full name: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // 移除字串結尾的換行符
        buffer[strcspn(buffer, "\n")] = '\0';
    }
    len = strlen(buffer);
    printf("Welcome %s in Birby Enterprise\n", buffer);
    return 0;
}
