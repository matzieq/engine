#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("Everything's borked! %f", 3.14f);
    KERROR("Everything's borked! %f", 3.14f);
    KWARN("Everything's borked! %f", 3.14f);
    KINFO("Everything's borked! %f", 3.14f);
    KDEBUG("Everything's borked! %f", 3.14f);
    KTRACE("Everything's borked! %f", 3.14f);
    // KASSERT(1 == 0);
    KASSERT_MSG(1 == 2, "DAZ NOT KOMPJUT!");
    return 0;
}
