/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:27:58 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 15:48:18 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int         ft_atoi(char *str);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_isprint(int c);
char        *ft_itoa(int n);
void        *ft_memalloc(size_t size);
void        *ft_memccpy(void *dst, const void *src, int c, size_t n);
void        *ft_memchr(const void *s, int c, size_t n);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
void        *ft_memcpy(void *dst, const void *src, size_t n);
void        *ft_memmove(void *dst, const void *src, size_t len);
void        *ft_memset(void *b, int c, size_t len);
void        *ft_putchar_fd(char c, int fd);
void        ft_putchar(char c);
void        ft_putendl_fd(const char *s, int fd);
void        ft_putendl(const char *s);
void        *ft_putnbr_fd(int n, int fd);
void        ft_putnbr(int nb);
void        ft_putstr_fd(const char *s, int fd);
void        ft_putstr(const char *s);
char        *ft_strcat(char *base, char *toadd);
char        *ft_strchr(char *s, int c);
void        ft_strclr(char *s);
int         ft_strcmp(char *s1, char *s2);
char        ft_strcpy(char *dst, char *src);
void        ft_strdel(char **as);
char        *ft_strdup(char *src);
int         ft_strequ(const char *s1, const char *s2);
void        ft_striter(char const *s, void (*f)(char *));
void        ft_striteri(char *s, void(*f)(unsigned int, char *));
char        *ft_strjoin(char const *s1, char const *s2);
size_t      ft_strlcat(char *dst, const char *src, size_t size);
size_t      ft_strlen(char *str);
char        *ft_strmap(char const *s, char (*f)(char));
char        *ft_strncat(char *base, char *toadd, size_t n);
int         ft_strncmp(char *s1, char *s2, int n);
char        *ft_strncpy(char *dst, char *src, int n);
int         ft_strnequ(const char *s1, const char *s2, size_t len);
char        *ft_strnew(size_t size);
char        *ft_strnstr(char *haystack, char *needle, size_t len);
char        *ft_strrchr(char *s, int c);
char        **ft_strsplit(char const *s, char c);
char        *ft_strstr(char *haystack, char *needle);
char        *ft_strsub(char const *s, unsigned int start, size_t len);
char        *ft_strtrim(char const *s);
int         ft_tolower(int c);
int         ft_toupper(int c);

#endif