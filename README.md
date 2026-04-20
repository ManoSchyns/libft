*This activity has been created as part of the 42 curriculum by mschyns*

## Description
This project is a static library of some standard functions in c.
The functions to append in the library are given by 42.

To create this library, we are asked to create all the functions and a Makefile that will compile and create the static library.

## Instructions
**To create the function library, you must execute the following commands:**

*git clone git@github.com:42learners/Common-Core---Libft-78d77da9-5d6e-4920-b475-05b444058d82.git*

*cd Common-Core---Libft-78d77da9-5d6e-4920-b475-05b444058d82*

*make*

**You would have a file libft.a**

**You can now compile your own program with :**

*cc -Wall -Wextra -Werror program.c -L. -lft*

**Pogram is your progam name, it could be main.c, as you want.**

## Resources
- Tutoriel Makefile : https://borntocode.fr/creer-un-makefile-pour-son-projet/
- Documantation for README: https://www.ionos.fr/digitalguide/sites-internet/developpement-web/fichier-readme/
- What is a library : https://perso.ens-lyon.fr/frederic.vivien/Enseignement/PPP-2001-2002/LibDyn.pdf
- More about linked list : https://www.geeksforgeeks.org/c/linked-list-in-c/

AI (ChatGPT) was used to:
- correct English grammar of the README.md

## Description of the library
**This library contains :**

### *The man functions prefixed by ft_ :* 
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

### *Additionnal functions*
- ft_substr

*Allocates (with malloc(3)) and returns a substring from the string ’s’.The substring begins at index ’start’ and is of maximum size ’len’.*

- ft_strjoin

*Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.*

- ft_strtrim

*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.*

- ft_split

*Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.*

- ft_itoa

*Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.*

- ft_strmapi

*Applies the function ’f’ to each character of the string ’s’, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of ’f’.*

- ft_striteri

*Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.*

- ft_putchar_fd

*Outputs the character ’c’ to the given file descriptor.*

- ft_putstr_fd

*Outputs the string ’s’ to the given file descriptor.*

- ft_putendl_fd

*Outputs the string ’s’ to the given file descriptor followed by a newline.*

- ft_putnbr_fd

*Outputs the integer ’n’ to the given file descriptor.*

### *Linked list functions*

- ft_lstnew

*Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.*

- ft_lstadd_front

*Adds the node ’new’ at the beginning of the list.*

- ft_lstsize

*Counts the number of nodes in the list.*

- ft_lstlast

*Returns the last node of the list.*

- ft_lstadd_back

*Adds the node ’new’ at the end of the list.*

- ft_lstdelone

*Takes a node as parameter and frees its content using the function ’del’. Frees the node itself but does NOT free the next node.*

- ft_lstclear

*Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL.*

- ft_lstiter

*Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.*

- ft_lstmap

*Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.*