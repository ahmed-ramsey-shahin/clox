#ifndef CLOX_VM_H
#define CLOX_VM_H

#include "chunk.h"

typedef struct {

    Chunk* chunk;
    uint8_t* ip;

} VM;

typedef enum {

    INTERPRET_OK,
    INTERPRET_RUNTIME_ERROR,
    INTERPRET_COMPILE_ERROR,

} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(Chunk* chunk);

#endif //CLOX_VM_H
