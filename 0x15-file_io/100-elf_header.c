#include "main.h"

/**
 * print_abi - prints ABI version
 * @abi : ABI byte
 */
void print_abi(unsigned char *abi)
{
	printf("  ABI version:                    %d\n",
			abi[EI_ABIVERSION]);
}

/**
 * print_osabi - prints OS ABI
 * @osabi : the PS ABI byte
 */
void print_osabi(unsigned char *osabi)
{
	printf("  OS/ABI:			    ");
	switch (osabi[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", osabi[EI_OSABI]);
			break;
	}
}

/**
 * print_version - prints version info
 * @elf_version: the version byte
 */
void print_version(unsigned char *elf_version)
{
	printf("  Version:		   %d", elf_version[EI_VERSION]);
	if (elf_version[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * print_data - Prints the endianness of an ELF File
 * @elf_data: ELF class
 */
void print_data(unsigned char *elf_data)
{
	printf("Data:			      ");
	switch (elf_data[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's compement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's compement, big Endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_data[EI_CLASS]);
			break;
	}
}

/**
 * print_class - Prints the architech.. class of an ELF File
 * @elf_class: ELF Class
 */
void print_class(unsigned char *elf_class)
{
	printf("  Class:			     ");
	switch (elf_class[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_class[EI_CLASS]);
			break;
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF Header
 * @ident: a pointer to array containg ELF magic nums
 */
void print_magic(unsigned char *ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * check_elf - Checks if a file is ELF File
 * @ident: a pointer to array containg ELF magic nums
 */
void check_elf(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 &&
				ident[i] != 'E' &&
				ident[i] != 'L' &&
				ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * close_elf - closes an ELF File
 * @eld: file descriptor class
 */
void close_elf(int eld)
{
	if (close(eld) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", eld);
		exit(98);
	}
}

/**
 * print_entry - Prints the entry point of an ELF File
 * @header: Pointer to ELF header struct
 * @e_ident: Array containg the ELF identification bytes
 */
void print_entry(void *header, unsigned char *e_ident)
{
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("  Entry point address:               0x%x\n", ((Elf32_Ehdr *)header)->e_entry);
	if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("  Entry point address:               0x%lx\n", ((Elf64_Ehdr *)header)->e_entry);
}

/**
 * print_type - Prints the type of an ELF File
 * @header: Pointer to ELF header struct
 * @e_ident: Array containg the ELF identification bytes
 */
void print_type(void *header, unsigned char *e_ident)
{
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("  Type:                              ");
		switch (((Elf32_Ehdr *)header)->e_type)
		{
			case ET_NONE:
				printf("NONE (Unknown type)\n");
				break;
			case ET_REL:
				printf("REL (Relocatable file)\n");
				break;
			case ET_EXEC:
				printf("EXEC (Executable file)\n");
				break;
			case ET_DYN:
				printf("DYN (Shared object file)\n");
				break;
			case ET_CORE:
				printf("CORE (Core file)\n");
				break;
			default:
				printf("0x%x (Unknown type)\n", ((Elf32_Ehdr *)header)->e_type);
				break;
		}
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		switch (((Elf64_Ehdr *)header)->e_type)
		{
			case ET_NONE:
				printf("NONE (Unknown type)\n");
				break;
			case ET_REL:
				printf("REL (Relocatable file)\n");
				break;
			case ET_EXEC:
				printf("EXEC (Executable file)\n");
				break;
			case ET_DYN:
				printf("DYN (Shared object file)\n");
				break;
			case ET_CORE:
				printf("CORE (Core file)\n");
				break;
			default:
				printf("0x%x (Unknown type)\n", ((Elf64_Ehdr *)header)->e_type);
				break;
		}
	}
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array containg command line arguments
 *
 * Return: 0 on sucess, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd, fr;
	Elf64_Ehdr *hdr64;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
		exit(98);
	}

	hdr64 = malloc(sizeof(Elf64_Ehdr));

	if (hdr64 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		close_elf(fd);
		exit(98);
	}

	fr = read(fd, hdr64, sizeof(Elf64_Ehdr));

	if (fr == -1)
	{
		free(hdr64);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
		exit(98);
	}

	check_elf(hdr64->e_ident);
	print_magic(hdr64->e_ident);
	print_class(hdr64->e_ident);
	print_data(hdr64->e_ident);
	print_version(hdr64->e_ident);
	print_abi(hdr64->e_ident);
	print_osabi(hdr64->e_ident);
	print_entry(hdr64, hdr64->e_ident);
	print_type(hdr64, hdr64->e_ident);

	close_elf(fd);
	free(hdr64);
	return (0);
}
