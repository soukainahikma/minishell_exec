#include "includes.h"

char *clear_(t_minishell *shell) 
{
	const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J\n";
  	write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
	return("");
}

void fill_dispatcher(t_minishell shell)
{
	int nb_choice = atoi(shell.choice);
	char *(*command[9])(t_minishell *);
	
	if(nb_choice <= 8 && nb_choice >=0)
	{
		command[0] = ft_system;
		command[2] = pwd;
		command[1] = echo;
		command[3] = cd;
		command[4] = export;
		command[5] = unset;
		command[6] = env_;
		command[7] = exit_;
		command[8] = clear_;
		ft_putstr(command[nb_choice](&shell),1);
	}
	else
	{
		ft_putstr(shell.choice,1);
		ft_putstr(" :command not found\n",1);
	}
}