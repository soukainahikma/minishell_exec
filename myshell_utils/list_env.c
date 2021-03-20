#include "includes.h"

t_element	*create_list(void *elt1,void *elt2, size_t data_size)
{
	t_element *stnode;

	stnode = (t_element *)malloc(sizeof(t_element));
	if (stnode == NULL)
		return (NULL);
	else
	{
		stnode->obj1 = malloc(data_size);
		stnode->obj2 = malloc(data_size);
		stnode->obj1 = elt1;
		stnode->obj2 = elt2;
		stnode->next = NULL;
	}
	return (stnode);
}
t_element	*add_end(t_element **liste, void *elt1,void *elt2, size_t data_size)
{
	t_element	*new;
	t_element	*ptr;

	ptr = *liste;
	new = (t_element *)malloc(sizeof(t_element));
	if (new == NULL)
		return (NULL);
	else
	{
		new->obj1 = malloc(data_size);
		new->obj2 = malloc(data_size);
		new->obj1 = elt1;
		new->obj2 = elt2;
		new->next = NULL;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (*liste);
}
void fill_list(char **var,t_minishell *shell)
{
	if (shell->shell == NULL)
			shell->shell = create_list(var[0],var[1], sizeof(char *));
		else
			shell->shell = add_end(&shell->shell,var[0],var[1], sizeof(char *));
}
void delete_elem(char *elm,t_minishell **shell_)
{
	t_element *list;
	t_element *p;
	list = (*shell_)->shell;
	if(list == NULL)
		return;

	while(list->next)
	{
		if(strcmp(list->next->obj1,elm) == 0)
		{
			p = list->next;
			list->next = list->next->next;
			free(p);
			break;
		}
		list = list->next;
	}
}

/* int main(int argc,char **argv,char **env)
{
    t_element *p;
	t_minishell shell_;
	shell_.enviroment = env;
	shell_.shell = NULL;
	
	char *str = env_(&shell_);
	if(strcmp(argv[1] ,"1")==0)
		delete_elem("_",&shell_);
    p = shell_.shell;
    while (p != NULL)
    {
		printf("%s=%s\n", p->obj1,p->obj2);
		p = p->next;
	}
} */