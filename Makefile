# Makefile for the unknown compiler

top = $(shell pwd)
build_dir = $(top)/build
target = unknown

# Add the source files and dependencies
include $(top)/source/Makefile
include $(top)/include/Makefile

src = $(addprefix $(top)/, $(src-y))
deps = $(addprefix $(top)/, $(deps-y))

all: $(src) $(deps)
	@mkdir -p $(build_dir)
	@$(CC) -I$(top)/include $(src) -o $(build_dir)/$(target)
	@$(build_dir)/$(target) $(arg)

clean:
	@rm -r -r $(build_dir)
