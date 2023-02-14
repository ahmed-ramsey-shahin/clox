#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main() {

    initVM();
    Chunk chunk;
    initChunk(&chunk);
    int constant1 = addConstant(&chunk, 12);
    int constant2 = addConstant(&chunk, 14);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constant1, 1);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constant2, 1);
    writeChunk(&chunk, OP_RETURN, 2);
    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;

}
