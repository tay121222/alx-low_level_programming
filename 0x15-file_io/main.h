#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_abi(unsigned char *abi);
void print_osabi(unsigned char *osabi);
void print_version(unsigned char *elf_version);
void print_data(unsigned char *elf_data);
void print_class(unsigned char *elf_class);
void print_magic(unsigned char *ident);
void check_elf(unsigned char *ident);
void close_elf(int eld);
void print_type(void *header, unsigned char *e_ident);
void print_entry(void *header, unsigned char *e_ident);

#endif
