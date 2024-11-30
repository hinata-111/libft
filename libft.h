/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisuzuki <hisuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:09:12 by hisuzuki          #+#    #+#             */
/*   Updated: 2024/11/30 18:10:43 by hisuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

define libft_h
include<limits.h>
include<stdlib.h>
inclide<unistd.h>

typedef struct s_list
{
        void                    *content;
        struct s_list   *next;
}                                       t_list;
[17:51]
void                            ft_memset(voids, int c, size_t n);
void                            ft_bzero(void *s, size_t n);
void                            ft_memcpy(voiddest, const void *src, size_t n);
void                            ft_memmove(voiddest, const void *src, size_t n);
void                            ft_memchr(const voids, int c, size_t n);
int                                     ft_memcmp(const void s1, const voids2, size_t n);

size_t                          ft_strlen(const char c);
size_t                          ft_strlcpy(chardst, const char src, size_t size);
size_t                          ft_strlcat(chardst, const char *src, size_t size);
char                            ft_strchr(const chars, int c);
char                            ft_strrchr(const chars, int c);
char                            ft_strnstr(const charbig, const char little,
                                                size_t len);
int                                     ft_strncmp(const chars1, const char s2, size_t n);
int                                     ft_atoi(const charnptr);

int                                     ft_isalpha(int c);
int                                     ft_isdigit(int c);
int                                     ft_isalnum(int c);
int                                     ft_isascii(int c);
int                                     ft_isprint(int c);
int                                     ft_toupper(int c);
int                                     ft_tolower(int c);
[17:51]
void                            *ft_calloc(size_t nmemb, size_t size);
char                            ft_strdup(const chars);

char                            ft_substr(char consts, unsigned int start, size_t len);
char                            ft_strjoin(char consts1, char const *s2);
char                            ft_strtrim(char consts1, char const set);
char                            **ft_split(char consts, char c);
char                            *ft_itoa(int n);
char                            ft_strmapi(char consts, char (f)(unsigned int, char));
void                            ft_striteri(chars, void (f)(unsigned int, char));
void                            ft_putchar_fd(char c, int fd);
void                            ft_putstr_fd(char s, int fd);
void                            ft_putendl_fd(chars, int fd);
void                            ft_putnbr_fd(int n, int fd);

t_list                          ft_lstnew(voidcontent);
void                            ft_lstadd_front(t_list lst, t_list new);
int                                     ft_lstsize(t_listlst);
t_list                          ft_lstlast(t_listlst);
void                            ft_lstadd_back(t_list lst, t_list new);
void                            ft_lstdelone(t_listlst, void (dsl)(void));
void                            ft_lstclear(t_list *lst, void (del)(void ));
void                            ft_lstiter(t_listlst, void (f)(void));
t_list                          ft_lstmap(t_listlst, void (f)(void ),
                                                void (del)(void ));

#endif / LIBFT_H */