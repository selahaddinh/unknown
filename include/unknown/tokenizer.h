// Tokenizer implementation

#ifndef TOKENIZER_H
#define TOKENIZER_H

struct token {
    char* data;
};

struct tokenizer {

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

void get_next_token(struct tokenizer* t);

#endif
