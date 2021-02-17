// Tokenizer implementation

#include <unknown/lexer.h>
#include <unknown/platform.h>

void get_next_token(struct lexer* lex) {

    print("Starting the lexer");

    // Check that we have gotten any data
    for (u32 i = 0; i < lex->file_size; i++) {
        print("{c}", lex->file[i]);
    }
}
