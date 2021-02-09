/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string copying
**
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/


/*
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while ((src[i] != '\0') && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}
*/
#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_strlcpy(char *dst, const char *src, int size)
{
	char			current_char;
	unsigned int	iterator;

	if (src == 0)
		return (0);
	if (size > 0)
	{
		iterator = 0;
		current_char = src[iterator];
		while (current_char != '\0' && iterator < (size - 1))
		{
			dst[iterator] = current_char;
			iterator++;
			current_char = src[iterator];
		}
		dst[iterator] = '\0';
	}
	return (ft_strlen(src));
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int first_length = 25;
	char original_string[25] = "Success\n";
	char destination_string[25] = "Garb\n";

	unsigned int second_length = 2;
	char original_string_2[2] = "2";
	char destination_string_2[2] = "";

	unsigned int third_length = 1;
	char original_string_3[1] = "";
	char destination_string_3[1] = " ";
	unsigned int return_length;

	printf("%s\n", original_string);
	printf("%s\n", destination_string);
	return_length = ft_strlcpy(destination_string, original_string, first_length);
	printf("%s\n", original_string);
	printf("%s\n", destination_string);
	printf("%d\n", return_length);

	printf("---------------\n");

	printf("%s\n", original_string_2);
	printf("%s\n", destination_string_2);
	return_length = ft_strlcpy(destination_string_2, original_string_2, second_length);
	printf("%s\n", original_string_2);
	printf("%s\n", destination_string_2);
	printf("%d\n", return_length);

	printf("---------------\n");

	printf("%s|\n", original_string_3);
	printf("%s|\n", destination_string_3);
	return_length = ft_strlcpy(destination_string_3, original_string_3, third_length);
	printf("%s|\n", original_string_3);
	printf("%s|\n", destination_string_3);
	printf("%d\n", return_length);

	return (0);
}