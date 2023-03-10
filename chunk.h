#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"
#include "value.h"

typedef enum {

    OP_RETURN,
    OP_CONSTANT,
    OP_CONSTANT_LONG,

} OpCode;

typedef struct {

    int count;
    int capacity;
    int* lines;
    uint8_t* code;
    ValueArray constants;

} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif //CLOX_CHUNK_H
