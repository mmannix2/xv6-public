#include "types.h"
#include "stat.h"
#include "user.h"

uint MAX = 65535;
int main(int argc, char** argv) {
    uint i;
    int quiet = 0;
    int sum = 0;

    if(argc > 1 && argv[1][0] == '-') {
        printf(2, "%s\n", argv[1]);
        if(argv[1][1] == 'q')
            quiet = 1;
    }
    
    for(i=0; i<=MAX; i++) {
        if(quiet == 0) {
            printf(2, "Working on %d of %d.\n", i, MAX);
        }
        //Do something
        sum += i;
    }
    if(quiet == 0)
        printf(2, "Sum: %d\n", sum);
    printf(2,"Done!\n");
    exit();
}
