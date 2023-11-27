// the buffer is treated as a C-style string
void    create_list(t_list **list, int fd)
{
   int  char_read; //num of chars read by the read() function
   char *buf; //buffer for readin data from file

   // scan line if '\n' is present
   // докато while цикъла търси newline char
   // аргумента е *list, защото функцияат ще търси в *list
   while (!found_newline(*list))
   {
        buf = malloc(BUFFER_SIZE + 1);
        if (NULL == buf)
            return ;

        char_read = read(fd, buf, BUFFER_SIZE);//reads data from a fd into the buffer
        if (char_read == 0)
        {
            free(buf);
            return ;
        }
        buf[char_read] = '\0';
        // Append the node
        append(list, buf);
   } 
}



/*
Reads a line from a file descriptor and returns that line as a dynamically allocated string.  
*/
#include "get_next_line.h"

char *get_next_line(int fd)
{
    static t_list   *list = NULL;
    char            *next_line;

    // fd are only positives | read gives -1 if there is a problem with reading
    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    // Create my list until I encounter '\n'
    create_list(&list, fd);
}

int len_to_newline(t_list *list)
{
    int i;
    int len;

    if (list == NULL)
        return 0;
    len = 0;
    while (list)
    {
        i = 0;
        while (/* condition */)
        {
            /* code */
        }
        
    }
    
    
}