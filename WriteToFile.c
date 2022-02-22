#include <stdio.h>

int main()
{
    FILE* ptr = fopen("TestingWriting1.txt", "a");

    (ptr==NULL) ? printf("Pointer is empty!") : printf("Pointer is ok");

    char data []="Hope this works :(";

    fputs(data,ptr);
    fclose(ptr);
}