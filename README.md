# Project - Our own Shell


[![Mini|Shell](https://i.ibb.co/tq5Xm14/ourshell.png)](https://en.wikipedia.org/wiki/Unix_shell)
###### Project by Holberton Students for Holberton School
## What is a shell?
A Unix **shell** is a **command-line interpreter** or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.
## Installation

Use the next command for to install our version of shell.

```bash
git clone https://github.com/gomba66/simple_shell.git
```

And then you should to compile the files
```
gcc *.c -Wall -Werror -Wextra -pedantic -o Shell
```
## Execute
For execute our shell you should to type:

```
./Shell
```
## Usage

```
$ ls
```
type ENTER

## Example On screen... ($ ls)
```
$ ls
color.c    _exe.c       main.c                _prompt.c  searchpath.c  _strtok.c       tokpath.c
_concat.c  holberton.h  man_1_simple_shell  _printstring.c       README.md  stringfun.c   Superminishell
$
```

## Example On screen... ($ ls -l)
```
$ ls -l
total 72
-rw-rw-r-- 1 vagrant vagrant   998 Aug 27 20:05 README.md
-rwxrwxr-x 1 vagrant vagrant 13929 Aug 28 19:56 Superminishell
-rw-rw-r-- 1 vagrant vagrant   921 Aug 28 19:37 _concat.c
-rw-rw-r-- 1 vagrant vagrant  1034 Aug 28 19:50 _exe.c
-rw-rw-r-- 1 vagrant vagrant   167 Aug 28 19:37 _printstring.c
-rw-rw-r-- 1 vagrant vagrant   830 Aug 28 19:37 _prompt.c
-rw-rw-r-- 1 vagrant vagrant   490 Aug 28 19:37 _strtok.c
-rw-rw-r-- 1 vagrant vagrant   238 Aug 28 19:37 color.c
-rw-rw-r-- 1 vagrant vagrant   613 Aug 28 19:56 holberton.h
-rw-rw-r-- 1 vagrant vagrant   844 Aug 28 19:55 main.c
-rw-rw-r-- 1 vagrant vagrant  1666 Aug 29 01:37 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant   428 Aug 28 19:37 searchpath.c
-rw-rw-r-- 1 vagrant vagrant   922 Aug 28 19:56 stringfun.c
-rw-rw-r-- 1 vagrant vagrant   612 Aug 28 19:37 tokpath.c
$
```
## it work too with ($ /bin/ls)
```
$ /bin/ls
README.md	_concat.c  _printstring.c  _strtok.c  holberton.h  man_1_simple_shell	searchpath.c  tokpath.c
Superminishell	_exe.c	      _prompt.c	      color.c    main.c	      			stringfun.c
$ 
```
## it work too with ($ /bin/ls -l)
```
$ /bin/ls -l
total 72
-rw-rw-r-- 1 vagrant vagrant   998 Aug 27 20:05 README.md
-rwxrwxr-x 1 vagrant vagrant 13929 Aug 28 19:56 Superminishell
-rw-rw-r-- 1 vagrant vagrant   921 Aug 28 19:37 _concat.c
-rw-rw-r-- 1 vagrant vagrant  1034 Aug 28 19:50 _exe.c
-rw-rw-r-- 1 vagrant vagrant   167 Aug 28 19:37 _printstring.c
-rw-rw-r-- 1 vagrant vagrant   830 Aug 28 19:37 _prompt.c
-rw-rw-r-- 1 vagrant vagrant   490 Aug 28 19:37 _strtok.c
-rw-rw-r-- 1 vagrant vagrant   238 Aug 28 19:37 color.c
-rw-rw-r-- 1 vagrant vagrant   613 Aug 28 19:56 holberton.h
-rw-rw-r-- 1 vagrant vagrant   844 Aug 28 19:55 main.c
-rw-rw-r-- 1 vagrant vagrant  1666 Aug 29 01:37 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant   428 Aug 28 19:37 searchpath.c
-rw-rw-r-- 1 vagrant vagrant   922 Aug 28 19:56 stringfun.c
-rw-rw-r-- 1 vagrant vagrant   612 Aug 28 19:37 tokpath.c
$ 
```
## Contributing
You can to help us, forking our repository, merge are welcome!

## Created by:
###### Twitter accounts: [Daniel Ramirez](https://twitter.com/gomba662) - [Jose Marulanda](https://twitter.com/JoseMar42198046)
###### GitHub accounts: [Daniel Ramirez](https://github.com/gomba66) - [Jose Marulanda](https://github.com/JoseMarulanda)