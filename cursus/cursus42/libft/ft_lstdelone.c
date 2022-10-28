/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:59:59 by hnait             #+#    #+#             */
/*   Updated: 2022/10/23 18:33:08 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	lst->next = 0;
	del(lst->content);
	free(lst);
	lst = 0;
}	

void fre(void *content)
{
	content = 0;
	free(content);
}

int main()
{
	t_list *list = ft_lstnew(ft_strdup("othmane"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("tian")));

	printf("%d\n", ft_lstsize(list));
	ft_lstdelone(list->next, &fre);
	printf("%d\n", ft_lstsize(list));
}
