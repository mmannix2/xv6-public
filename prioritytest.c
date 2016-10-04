#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv) {
    char* cmd[3];
    cmd[0] = "longproc";
    cmd[1] = "-q";
    cmd[2] = "\0";
    
    int rc = fork();
    if(rc == 0) {
        printf(2, "I'm the child!\n");
        getpinfo();
        exec(cmd[0], cmd);
        exit();
    }
    else {
        int i;
        for(i=0; wait()==rc; i++) {
            printf(2, "Testing uppriority.\n");
            uppriority();
            getpinfo();
            sleep(1);
        }
        exit();
    }
}
