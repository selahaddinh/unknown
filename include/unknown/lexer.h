// Tokenizer implementation

#ifndef LEXER_H
#define LEXER_H

#include <unknown/types.h>

struct token {
    char* data;
};

struct lexer {

    // Column and row of the program
    u32 col;
    u32 line;

    // Name of the file
    char* file_name;

    // Points to the entire file in RAM
    char* file;
    u32 file_size;

    // Pointer to the read location in RAM
    char* source;
    char* text;

    struct token token;
};

void get_next_token(struct lexer* lex);

#endif
