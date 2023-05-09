#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <elf.h>
void entry_display(unsigned long int e_entry, unsigned char *e_class);
void displayABI(unsigned char *e_class);
void display_OS_ABI(unsigned char *e_class);
void displayType(unsigned int eType, unsigned char *e_class);
void displayData(unsigned char *e_class);
void displayClass(unsigned char *e_class);
void print_magic_num(unsigned char *e_class);
void displayVersion(unsigned char *e_class);
void checkELF(unsigned char *e_class);
void closeELF(int ELF_fd);

/**
 * entry_display - Funtion that display the entry point of ELF header.
 * @e_entry: variable of ELF addresss for the entry point.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void entry_display(unsigned long int e_entry, unsigned char *e_class)
{
	printf("  Entry point address:                              ");

	if (e_class[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * displayABI - Function that prints the ABI version of ELF header.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void displayABI(unsigned char *e_class)
{
	printf("  ABI Version:                              %d\n",
			e_class[EI_ABIVERSION]);
}
/**
 * display_OS_ABI - Function that prints info about the OS/ABI in ELF header.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void display_OS_ABI(unsigned char *e_class)
{
	printf("  OS/ABI:                              ");

	switch (e_class[EI_OSABI])
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
			printf("<unknown: %x>\n", e_class[EI_OSABI]);
	}
}
/**
 * displayType - Function that display the type of ELF header.
 * @eType: Variable of the ELF header type.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void displayType(unsigned int eType, unsigned char *e_class)
{
	if (e_class[EI_DATA] == ELFDATA2MSB)
		eType >>= 8;


	printf("  Type:                              ");
	if (eType == ET_NONE)
		printf("NONE (None)\n");
	else if (eType == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (eType == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (eType == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (eType == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", eType);
}
/**
 * displayData - Function that print the ELF header data.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void displayData(unsigned char *e_class)
{
	printf("  Data:                              ");


	if (e_class[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_class[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_class[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_class[EI_CLASS]);

}
/**
 * displayClass - Function that diplay the ELF header class.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void displayClass(unsigned char *e_class)
{
	printf("  Class:                              ");

	switch (e_class[EI_CLASS])
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
			printf("<unknown: %x>\n", e_class[EI_CLASS]);
	}
}
/**
 * print_magic_num - Function that prints the magic number of ther ELF header.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void print_magic_num(unsigned char *e_class)
{
	int i = 0;

	printf("  Magic:                              ");
	while (i < EI_NIDENT)
	{
		printf("%02x", e_class[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}
/**
 * displayVersion - Function that prints the version of the ELF header.
 * @e_class: Pointer to array of ELF version of the ABI.
 * Return: Nothing.
 */
void displayVersion(unsigned char *e_class)
{
	printf("  Version:                           %d",
			e_class[EI_VERSION]);

	if (e_class[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 * checkELF - Function that check a file if it is an ELF file.
 * @e_class: Pointer to array of ELF of the API.
 * Return: Nothing.
 */
void checkELF(unsigned char *e_class)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_class[i] != 127 &&
				e_class[i] != 'E' &&
				e_class[i] != 'L' &&
				e_class[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * closeELF - Function that close elf file.
 * @ELF_fd: Variable of the file discriptor of the ELF file.
 * If the file can not be close, exit with error code 98.
 * Return: Nothing.
 */
void closeELF(int ELF_fd)
{
	if (close(ELF_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ELF_fd);
		exit(98);
	}
}
/**
 * main - Entry point.
 * Description: Function that display all the information in
 * an ELF header at the start of the ELF file.
 * @argc: Argument count.
 * @argv: Argument vectors.
 *
 * Return: 0 on SUCCESS.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeELF(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		closeELF(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}


	checkELF(header->e_ident);
	printf("ELF Header:\n");
	print_magic_num(header->e_ident);
	displayClass(header->e_ident);
	displayData(header->e_ident);
	displayVersion(header->e_ident);
	display_OS_ABI(header->e_ident);
	displayABI(header->e_ident);
	displayType(header->e_type, header->e_ident);
	entry_display(header->e_entry, header->e_ident);
	free(header);
	closeELF(op);

	return (0);
}
