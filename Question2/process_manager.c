#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed\n");
        return 1;
    }

    if (pid == 0) {
        printf("Child Process Started (PID: %d)\n", getpid());

        while (1) {
            sleep(1);
        }
    } else {
        printf("Parent Process (PID: %d)\n", getpid());

        sleep(5);

        printf("Child is unresponsive. Sending SIGTERM...\n");
        kill(pid, SIGTERM);

        wait(NULL);

        printf("Child terminated successfully.\n");
        printf("Zombie process prevented.\n");
    }

    return 0;
}
