#include "main.h"

/**
 * print_abi - prints ABI version
 * @abi : ABI byte
 */
void print_abi(unsigned char abi)
{
	printf("ABI version: %u\n", abi);
}

/**
 * print_osabi - prints OS ABI
 * @osabi : the PS ABI byte
 */
void print_osabi(unsigned char osabi)
{
	printf("OS/ABI: ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_version - prints version info
 * @elf_version: the version byte
 */
void print_version(unsigned char elf_version)
{
	printf("ELF Version: ");
	if (elf_version == EV_CURRENT)
		printf("Current version\n");
	else
		printf("Invalid version\n");
}

/**
 * print_data - Prints the endianness of an ELF File
 * @elf_data: ELF class
 */
void print_data(unsigned char elf_data)
{
	printf("Data Encoding: ");
	switch (elf_data)
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("Little Endian\n");
			break;
		case ELFDATA2MSB:
			printf("Big Endian\n");
			break;
		default:
			printf("Unknown data encoding\n");
			break;
	}
}

/**
 * print_class - Prints the architech.. class of an ELF File
 * @elf_class: ELF Class
 */
void print_class(unsigned char elf_class)
{
	printf("ELF Class: ");
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("32-bit objects\n");
			break;
		case ELFCLASS64:
			printf("64-bit objects\n");
			break;
		default:
			printf("Unknown class\n");
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
	int fd;
	unsigned char e_ident[EI_NIDENT];
	Elf64_Ehdr *hdr64;
	Elf32_Ehdr *hdr32;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
		return (98);
	}

	if (read(fd, e_ident, EI_NIDENT) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		close_elf(fd);
		return (98);
	}

	check_elf(e_ident);
	print_magic(e_ident);
	print_class(e_ident[EI_CLASS]);
	print_data(e_ident[EI_CLASS]);
	print_version(e_ident[EI_CLASS]);
	print_abi(e_ident[EI_CLASS]);
	print_osabi(e_ident[EI_CLASS]);

	if (lseek(fd, EI_NIDENT, SEEK_SET) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot lseek to offset %d\n", EI_NIDENT);
		close_elf(fd);
		return (98);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		hdr32 = malloc(sizeof(Elf32_Ehdr));
		if (read(fd, hdr32, sizeof(Elf32_Ehdr)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
			close_elf(fd);
			free(hdr32);
			return (98);
		}
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		hdr64 = malloc(sizeof(Elf64_Ehdr));
		if (read(fd, hdr64, sizeof(Elf64_Ehdr)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
			close_elf(fd);
			free(hdr64);
			return (98);
		}
	}

	if (lseek(fd, EI_NIDENT, SEEK_SET) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot lseek to offset %d\n", EI_NIDENT);
		close_elf(fd);
		return (98);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		print_entry(hdr32, e_ident);
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		print_entry(hdr64, e_ident);

	if (e_ident[EI_CLASS] == ELFCLASS32)
		print_type(hdr32, e_ident);
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		print_type(hdr64, e_ident);

	close_elf(fd);
	free(hdr32);
	free(hdr64);
	return (0);
}
