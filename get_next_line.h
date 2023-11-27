/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:26:45 by aantonie          #+#    #+#             */
/*   Updated: 2023/11/27 15:15:26 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

// node of the linked list
typedef struct s_list
{
    char    *str_buf;
    struct s_list   *next_str;   
}               t_list;

int     found_newline(t_list *list);
t_list  *find_last_node(t_list *list);
char    *get_line(t_list *list);
void    copy_string(t_list, char *str);
int     len_to_newline(t_list)







#endif