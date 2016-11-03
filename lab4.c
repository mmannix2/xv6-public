#include "types.h"
#include "stat.h"
#include "user.h"

#define NULL 0

int main(int argc, char** argv) {
    int* ptr = NULL;

    if(ptr == NULL) {
        printf(1, "ptr is NULL!\nptr: %d\n", *ptr);
    }
    
    exit();
}
