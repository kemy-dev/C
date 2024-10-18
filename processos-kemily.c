#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
    int i;

    for (i = 0; i < 3; i++) {
        int ProcessID = fork();

        if (ProcessID < 0) {
       
                printf("Nao foi possivel criar um processo filho");

        } else if (ProcessID == 0) {
           
            printf("Numero do processo filho = %d, Numero do processo pai: %d\n", getpid(), getppid());
            sleep(i + 1);  
            return 0;
        }
    }
   
    for (i = 0; i < 3; i++) {
        wait(NULL);
    }

    printf("Processos filhos encerrados. Processo Pai = %d encerrado\n", getpid());

    return 0;
}