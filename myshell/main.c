
#include "includes.h"

// int main(int argc, char *argv[], char **env)
// {
// /* lexer +parser */
// 	t_minishell shell;
// 	char *command;
// 	int		rest;
// 	shell.enviroment = env;
// 	shell.shell = NULL;
// 	command = "";
// 	ft_putstr("sou_bash$ ",1);
// //	signal(SIGINT, SIG_IGN);
// //	signal(SIGQUIT, SIG_IGN);
// /* execution *********************************************/
// 	rest = 1;
// 	while (rest == 1)
// 	{
// 		rest = get_next_line(0, &command);
// 		shell.choice = command;
// 		if(strcmp(command,"exit") == 0)
// 		{
//  			ft_putstr(command,1);
// 			write(1,"\n",1);
// 			return(0);
// 		}
//         char **var;
//         while(*shell.enviroment)
//         {
//         	var =ft_split(*shell.enviroment,'=');
//             shell.enviroment++;
//         	fill_list(var,&shell);
//         }
// 		fill_dispatcher(shell);
// 		ft_putstr("sou_bash$ ",1);
// 	}
// /* execution *********************************************/	
// //	printf("command |%s|\n",command);
// } 
