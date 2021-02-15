<p align="center">
  <img src="https://github.com/strawberryhacker/pictures/blob/main/questionmark.png", width=100>
</p>

*This will give a breif overview over the unknown language. I will probably come with some personal preferences during the document. This is just my opinion, and I do not intend to offent anyone not following these*

### Variables

Variables are declared with a type name followed by an identifier. They are private by default, so in order to make them visible to other files you have to use the `pub` keyword.

```c
u32 some_name;              // This is a private variable
pub char some_other_name;   // This is a public variable which can be used in other files
```

Variables are not constant by default. To make them constant use the const keyword

```c
const u32 changable_variable;    // Constant variable
```

### Types

These are the planned types in the language

| Size | Signed | Unsigned | Char | 
|-|:-:|:-:|:-:|
| 8-bit | s8 | u8 | char | 
| 16-bit | s16 | u16 | - |
| 32-bit | s32 | u32 | - |
| 64-bit | s64 | u64 | - |

### Commenting

```c
// This is a comment
```


```c
/* This is a multiline comment */
```

The last option looks messy and should only be used to comment away blocks of code during testing. No library provided with the compiler will ever be commented like this.

### Functions

Functions are written like this. They always start with the func keyword. Any return value are placed after the function. Functions are private in nature. A function can be made visible outside the scope of the source file by using the pub keyword. 

```c
func some_func() -> u8 {
  // Some func
}
```

```c
pub func some_func() -> u8 {
  // Some func
}
```

### Loops

The language provides multiple options when it comes to loops. I will use the same keyword for all the loops because they are very similar in nature.

```c
loop {
  // This is an infinite loop
}
```

```c
loop u8 i = 0; i < 8; i++ {
  // This is a regular for loop
}
```

```c
loop some_variable != 100 {
  // This is a normal while loop
}
```

### Casting

The language supports casting from one type to another. The compiler will be able to figure out what the type of the casting should be

```c
u32 test = 313;
u8 new_variable <= test;  // This will cast a u32 to a u8
```

### Pointers

I will not change something that already works well. Pointers will be as variables; const by default

```c
u8* pointer;                         // Pointer to a variable u8
const struct some_struct* pointer;   // Pointer to a const struct
const const char** text;             // Const pointer to a const text string
```
The address operator can by used at all time

```c
struct name some_name;
const char* text <= &some_name;
const char** data = &text;
```

### Arrays



### Memories

Structures in a programming language is just a part of the memory with a specific meaning. Therefor the keyword for a structure will be mem

```c
mem token {
  char* name;
  const char* name;
}
```

As you see, there is no need to apply the final colon at the end.

### Types

A type is just a name for a specific thing. This is the same as the enum in C. The type is living in its own namespace and does therefore not need any unique name.

```c
type uart_state {
  RECEIVING,
  IDLE
}
```

### Includes

This language does not have header files. The 

```c
module uart {
  uart_recv,
  uart_init,
  uart_send
}
```

```c
use uart;
```
