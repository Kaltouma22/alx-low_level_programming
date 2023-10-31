#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header_info - Print information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 */

void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	printf("Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
	elf_header->e_ident[EI_MAG0], elf_header->e_ident[EI_MAG1],
	elf_header->e_ident[EI_MAG2], elf_header->e_ident[EI_MAG3],
	elf_header->e_ident[EI_MAG2], elf_header->e_ident[EI_MAG2],
	elf_header->e_ident[EI_MAG2], elf_header->e_ident[EI_MAG2],
	elf_header->e_ident[EI_MAG2], elf_header->e_ident[EI_MAG2],
	elf_header->e_ident[EI_MAG1]);

	printf("Class:	%s\n",
	elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");

	printf("Data:	%s\n",
	elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	elf_header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown");

	printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);

	printf("OS/ABI:  %d\n", elf_header->e_ident[EI_OSABI]);

	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type:    %d\n", elf_header->e_type);

	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}
