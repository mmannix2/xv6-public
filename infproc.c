#include "types.h"
#include "stat.h"
#include "user.h"

int MAX = 1024;
int main(int argc, char** argv) {
    int i;
    for(i=0; 1==1; i++) {
        printf(2, "Working on %d of Inf.\n", i);
        //Do something
    }
    printf(2,"Done!\n"); //This line will never be reached
    exit();
}
