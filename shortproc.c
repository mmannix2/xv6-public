#include "types.h"
#include "stat.h"
#include "user.h"

int MAX = 32767;
int main(int argc, char** argv) {
    int i;
    for(i=0; i<MAX; i++) {
        printf(2, "Working on %d of %d.\n", i, MAX);
        //Do something
    }
    printf(2,"Done!\n");
    exit();
}
