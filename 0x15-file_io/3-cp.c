#include "holberton.h"

/**
 * _errorDisplay - display error for a specific action
 *
 * @prmAction: action
 * @prmFileName: file name
 */
void _errorDisplay(int prmAction, char *prmFileName)
{
	char *action;

	action = (prmAction == READ_ACTION) ? "read from" : "write to";

	dprintf(STDERR_FILENO, "Error: Can't %s file %s\n", action, prmFileName);
	exit((prmAction == READ_ACTION) ? EXIT_READ_ERROR : EXIT_WRITE_ERROR);
}

/**
 * _checkFile - check file
 *
 * @prmDestFileName: destination file name
 * @prmSourceFileName: source file name
 */
void _checkFile(char *prmDestFileName, char *prmSourceFileName)
{
	if (!prmDestFileName)
		_errorDisplay(WRITE_ACTION, prmDestFileName);
	if (!prmSourceFileName)
		_errorDisplay(READ_ACTION, prmSourceFileName);
}

/**
 * _close - close a file
 *
 * @prmFileDescriptor: file descriptor
 */
void _close(int prmFileDescriptor)
{
	int fdClose;

	fdClose = close(prmFileDescriptor);

	if (fdClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", prmFileDescriptor);
		exit(EXIT_CLOSE_ERROR);
	}
}

/**
 * _copy - copy a file to another one
 *
 * @prmFileNameDest: destination file name
 * @prmFileNameSource: source file name
 */
void _copy(char *prmFileNameDest, char *prmFileNameSource)
{
	int fdFrom, fdTo, fdRead, fdWrite;
	char buffer[BUFFER_SIZE];

	fdFrom = open(prmFileNameSource, O_RDONLY);

	if (fdFrom == -1)
		_errorDisplay(READ_ACTION, prmFileNameSource);

	fdTo = open(
		prmFileNameDest,
		O_CREAT | O_WRONLY | O_TRUNC,
		DEFAULT_WRITE_RIGHTS
	);

	if (fdTo == -1)
		_errorDisplay(WRITE_ACTION, prmFileNameDest);

	fdRead = read(fdFrom, buffer, BUFFER_SIZE);

	if (fdRead == -1)
		_errorDisplay(READ_ACTION, prmFileNameSource);

	while (fdRead > 0)
	{
		fdWrite = write(fdTo, buffer, fdRead);

		if (fdWrite == -1)
			_errorDisplay(WRITE_ACTION, prmFileNameDest);

		fdRead = read(fdFrom, buffer, BUFFER_SIZE);

		if (fdRead == -1)
			_errorDisplay(READ_ACTION, prmFileNameSource);
	}

	_close(fdFrom);
	_close(fdTo);
}

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_WRONG_PARAMETER);
	}

	_checkFile(argv[2], argv[1]);

	_copy(argv[2], argv[1]);

	return (0);
}
