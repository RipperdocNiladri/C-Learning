#include <stdio.h>

int main() {
    int bytes, kilobytes, megabytes, gigabytes;

    printf("Enter the number of bytes: ");
    scanf("%d", &bytes);

    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;

    printf("Storage in different units:\n");
    printf("Kilobytes: %d\n", kilobytes);
    printf("Megabytes: %d\n", megabytes);
    printf("Gigabytes: %d\n", gigabytes);

    return 0;
}