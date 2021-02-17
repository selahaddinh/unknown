// Entry point of the compiler

#include <unknown/platform.h>
#include <unknown/lexer.h>

int main(int arg_count, char** args) {
    print("Starting compiler\n");

    // Make a new tokenizer for the first file to compile
    struct lexer lexer;

    i32 err = read_file("example/source/main.u", &lexer.file, &lexer.file_size);
    if (err) {
        return -1;
    }

    // Try to parse the file
    get_next_token(&lexer);

    return 0;
}
