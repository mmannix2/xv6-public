#include "types.h"
#include "stat.h"
#include "user.h"

uint MAX = 65535;
int main(int argc, char** argv) {
    uint i;
    for(i=0; i<=MAX; i++) {
        printf(2, "Working on %d of %d.\n", i, MAX);
        //Do something
    }
    printf(2,"Done!\n");
    exit();
}
