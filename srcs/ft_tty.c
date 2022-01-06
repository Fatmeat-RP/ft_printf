#ifndef _LINUX_LIMITS_H
# define _LINUX_LIMITS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define NR_OPEN		1024
# define N_TTY_BUF_SIZE	4096
# define NGROUPS_MAX	65536    /* supplemental group IDs are available */
# define ARG_MAX		131072    /* # bytes of args + environ for exec() */
# define LINK_MAX		127    /* # links a file may have */
# define MAX_CANON		255    /* size of the canonical input queue */
# define MAX_INPUT		255    /* size of the type-ahead buffer */
# define NAME_MAX		255    /* # chars in a file name */
# define PATH_MAX		4096    /* # chars in a path name including nul */
# define PIPE_BUF		4096    /* # bytes in atomic write to a pipe */
# define XATTR_NAME_MAX	255    /* # chars in an extended attribute name */
# define XATTR_SIZE_MAX	65536    /* size of an extended attribute value (64k) */
# define XATTR_LIST_MAX	65536    /* size of extended attribute namelist (64k) */
# define RTSIG_MAX		32

char	*ft_getinput(void);

#endif

char	*ft_getinput(void)
{
	char	buf[N_TTY_BUF_SIZE + 1];
	char	*ret;
	int		rd;
	int		i;

	rd = 0;
	i = 0;
	rd = read(0, buf, N_TTY_BUF_SIZE);
	buf[rd] = 0;
	ret = malloc(rd + 1);
	if (!ret)
		return (NULL);
	while (buf[i])
	{
		ret[i] = buf[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char	*ft_getcmd()
{

}

int	main(void)
{
	char	*s;
	char	*cmdres;

	while (1)
	{
		s = ft_getinput();
		cmdres = ft_getcmd(s);
		free (s);
		printf ("%s", cmdres);
		free (cmdres);
	}
	return (0);
}