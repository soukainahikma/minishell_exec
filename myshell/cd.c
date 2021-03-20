#include "includes.h"
char *cd(t_minishell *shell) 
{
		char s[100] = "-";
		DIR *folder = opendir(s);
		if(folder == NULL)
		{
			ft_putstr("bash: cd: ",1);
			ft_putstr(s,1);
			ft_putstr(": No such file or directory\n",1);
			return("");
		}
		chdir(s);
		return("");
}