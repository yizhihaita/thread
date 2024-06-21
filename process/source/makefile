TARGET=process_copy
INCLUDE_PATH=../include
CFLAGS=-I$(INCLUDE_PATH) -c -g
SRCFILE=$(wildcard *.c)
DSTFILE=$(patsubst %.c,%.o,$(SRCFILE))
$(TARGET):$(DSTFILE)
		  gcc $^ -o $@
%.o:%.c
	gcc $< $(CFLAGS)
