#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;

    fd = open("employees.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
        perror("File creation failed");
        return 1;
    }

    char record1[] = "101 Alice Manager\n";
    char record2[] = "102 Bob Developer\n";
    char record3[] = "103 Charlie Tester\n";

    write(fd, record1, strlen(record1));
    write(fd, record2, strlen(record2));
    write(fd, record3, strlen(record3));

    lseek(fd, strlen(record1), SEEK_SET);

    char updated[] = "102 Bob SeniorDeveloper\n";
    write(fd, updated, strlen(updated));

    lseek(fd, 0, SEEK_SET);

    char buffer[200];
    int bytes = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes] = '\0';

    printf("Employee Records:\n\n%s", buffer);

    close(fd);

    return 0;
}
