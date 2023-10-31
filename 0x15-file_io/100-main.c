#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Display information contained in the ELF header of an ELF file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, exit with appropriate error codes on failure.
 */

int main(int argc, char *argv[])
{
        int fd = open(argv[1], O_RDONLY);

        if (argc != 2)
        {
                fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
                return 98;
        }
        if (fd == -1)
        {
                perror("Error");
                return 98;
        }
        Elf64_Ehdr elf_header;
        if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
        {
                fprintf(stderr, "Error: Not an ELF file\n");
                close(fd);
                return (98);
        }
        print_elf_header_info(&elf_header);

        close(fd);
        return (0);
}
