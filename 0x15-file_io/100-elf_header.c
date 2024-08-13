#include "main.h"
#include <elf.h>

void print_additional_osabi(Elf64_Ehdr elf_header);

/**
 * print_magic - Prints the magic bytes of the ELF header.
 * @elf_header: The ELF header struct.
 */
void print_magic(Elf64_Ehdr elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", elf_header.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - Prints the class (32-bit or 64-bit) of the ELF file.
 * @elf_header: The ELF header struct.
 */
void print_class(Elf64_Ehdr elf_header)
{
	printf("  Class:                             ");
	switch (elf_header.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("None");
			break;
	}
	printf("\n");
}

/**
 * print_data - Prints the data encoding (endianness) of the ELF file.
 * @elf_header: The ELF header struct.
 */
void print_data(Elf64_Ehdr elf_header)
{
	printf("  Data:                              ");
	switch (elf_header.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("None");
			break;
	}
	printf("\n");
}

/**
 * print_version - Prints the version of the ELF file.
 * @elf_header: The ELF header struct.
 */
void print_version(Elf64_Ehdr elf_header)
{
	printf("  Version:                           %d",
		 elf_header.e_ident[EI_VERSION]);
	switch (elf_header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
	}
	printf("\n");
}

/**
 * print_osabi - Prints the operating system and ABI
 *		(Application Binary Interface).
 * @elf_header: The ELF header struct.
 */
void print_osabi(Elf64_Ehdr elf_header)
{
	printf("  OS/ABI:                            ");
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_additional_osabi(elf_header);
			break;
	}
	printf("\n");
}

/**
 * print_additional_osabi - Prints additional OS/ABI types
 *		if not covered in print_osabi.
 * @elf_header: The ELF header struct.
 */
void print_additional_osabi(Elf64_Ehdr elf_header)
{
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", elf_header.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion  - Prints the ABI version of the ELF file.
 * @elf_header: The ELF header struct.
 */
void print_abiversion(Elf64_Ehdr elf_header)
{
	printf("  ABI Version:                       %d\n",
		elf_header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of the ELF file
 *		(e.g., executable, shared object).
 * @elf_header: The ELF header struct.
 */
void print_type(Elf64_Ehdr elf_header)
{
	char *type_pointer = (char *)&elf_header.e_type;
	int data_encoding_offset = 0;

	printf("  Type:                              ");
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		data_encoding_offset = 1;
	switch (type_pointer[data_encoding_offset])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x",
				type_pointer[data_encoding_offset]);
			break;
	}
	printf("\n");
}

/**
 * print_entry - Prints the entry point address of the ELF file.
 * @elf_header: The ELF header struct.
 */
void print_entry(Elf64_Ehdr elf_header)
{
	int index = 0, max_index = 0;
	unsigned char *entry_point = (unsigned char *)&elf_header.e_entry;

	printf("  Entry point address:               0x");
	if (elf_header.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		index = elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!entry_point[index])
			index--;
		printf("%x", entry_point[index--]);
		for (; index >= 0; index--)
			printf("%02x", entry_point[index]);
		printf("\n");
	}
	else
	{
		index = 0;
		max_index = elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!entry_point[index])
			index++;
		printf("%x", entry_point[index++]);
		for (; index <= max_index; index++)
			printf("%02x", entry_point[index]);
		printf("\n");
	}
}

/**
 * main - Entry point for the ELF header viewer program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 1 on success, 0 on failure.
 */
int main(int argc, char **argv)
{
	int file_descriptor;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);

	bytes_read = read(file_descriptor, &elf_header, sizeof(elf_header));
	if (bytes_read < 1 || bytes_read != sizeof(elf_header))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);

	if (elf_header.e_ident[0] == 0x7f && elf_header.e_ident[1] == 'E' &&
		elf_header.e_ident[2] == 'L' && elf_header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not an ELF file: %s\n", argv[1]), exit(98);

	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_version(elf_header);
	print_osabi(elf_header);
	print_abiversion(elf_header);
	print_type(elf_header);
	print_entry(elf_header);

	if (close(file_descriptor))
		dprintf(STDERR_FILENO,
	"Error closing file descriptor: %d\n", file_descriptor), exit(98);

	return (EXIT_SUCCESS);
}
