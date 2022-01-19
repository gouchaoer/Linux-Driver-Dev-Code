#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define ENTRY(name)                             \
        .globl name;                            \
        name:

#define ENDPROC(name)

#endif

