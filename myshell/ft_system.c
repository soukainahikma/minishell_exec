#include "includes.h"

char	*ft_system(t_minishell *shell)
{
	int		pid;
	char*	binary_path;

	pid = fork();
	if (pid > 0)
		wait(NULL);
	else
	{
		binary_path = "/bin/ls";
		char *const argv[] = {binary_path, NULL};
		int a = execve(binary_path, argv, NULL);
		printf("%d\n",a);
	}
	return ("");
}