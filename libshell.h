#ifndef _UTILS_H_
#define _UTILS_H_

char **string_split(const char *str, char separator);
char *read_line(const int fd);
char *get_next_line(const int fd);

#endif /* _UTILS_H_ */
