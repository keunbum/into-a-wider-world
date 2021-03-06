# 3. Basic Bash Shell commands

## 3.1 Start the shell

The GNU bash shell is a program that allows you to interactively connect to a Linux system. The bash shell is run as a regular program, usually every time the user logs into the terminal. The shell that the system launches depends on the configuration of the user ID. This can be found in the /etc/passwd file.


## 3.2 Use the shell prompt

If you run the terminal pakage or log in to the Linux virtual console, you will be connected to the shell CLI prompt.
This prompt is the gateway to the shell and is where you enter shell commands.

The default prompt symbol in the bash shell is the dollar sign($). This symbol indicates that it is waiting for shell text input.


## 3.3 Interact with man page

```bash
# how to use man page
$ man man

# search by keyword(regex)
$ man -k [word]
```

### Linux man page section

| section | content                                                                                   |
|---------|-------------------------------------------------------------------------------------------|
|    1    | Executable programs or shell commands                                                     |
|    2    | System calls (functions provieded by the kernel)                                          |
|    3    | Library calss (functions within program libraries)                                        |
|    4    | Special files (usuaylly found in /dev)                                                    |
|    5    | File formats and conventions, e.g. /etc/passwd                                            |
|    6    | Games                                                                                     |
|    7    | Miscellaneous (Summary, Conventions, and others including macro packages and conventions) |
|    8    | System administration commands (usually only for root)                                    |
|    9    | Kernel routines [Non standard]                                                            |

In general, the man utility provides the lowest numbered content section for commands.

```bash
# if the command has a man page spanning a multi-section,
$ man [section-number] [word]

# a note about the section area itself.
$ man [section-number] intro

# you can also use 'info' or 'help'(-help or --help)
$ info info
$ help help
```


## 3.4 Explore file system

### 3.4.1 Linux file system

Common Linux directory names are based on the FHS(Filesystem Hierarchy Standard).

### 3.4.2 directory


## 3.5 View a list of files and directories

[ls](https://man7.org/linux/man-pages/man1/ls.1.html)

### 3.5.1 show default list

```bash
$ ls -F
$ ls -R
$ ls -a
```

### 3.5.2 show a long list

```bash
$ ls -l
```

The first line of output shows the total number of blocks contained in the directory.
From then on, each line contains the following information for each file (or directory):

* File type

* File permissions

* Number of file hard links

* File owner username

* File main group name

* Size in bytes of the file

* Last modified time of file

* File or directory name


### 3.5.3 filter the list output

Let's use regular expressions.


## 3.6 File handling


### 3.6.1 create a file

```bash
# create an empty file
# if a file already exists, update the modification time
$ touch [file]

# update the usage time of the file
$ touch -a [file]
# check the usage time of the file
$ ls -l --time=atime [file]
```

### 3.6.2 copy files
[cp](https://man7.org/linux/man-pages/man1/cp.1.html)

```bash
# recursively copy
$ cp -R [src] [target]
```

### 3.6.3 take advantage of the tab autocomplete feature

### 3.6.4 linking files

there are two types of file links available in Linux.

[ln](https://man7.org/linux/man-pages/man1/ln.1.html) or info ln

* symbolic link(some call it soft link)
``` bash
$ ln -s ex.c sl_ex.c
$ ls -il *ex.c
$ stat *ex.c
```

* hard link
``` bash
$ ln ex.c hl_ex.c
$ ls -il *ex.c
$ stat *ex.c
```

### 3.6.5 rename files

[mv](https://man7.org/linux/man-pages/man1/mv.1.html)

The inode number and modification time of the file do not change.
The mv command only affects the name of a file.
It is also used to change the location of a file.

As with cp, you can use the -i option with mv.
This will prompt you to do so before attempting to overwrite an existing file.

### 3.6.6 erase files

[rm](https://man7.org/linux/man-pages/man1/rm.1.html)

Let's make the -i option a daily routine.
Conversely, there will be times when the -f option is useful.


## 3.7 Managing directory

### 3.7.1 create a directory

[mkdir](https://man7.org/linux/man-pages/man1/mkdir.1.html)

```bash
# to create subdirectory as well, add the -p option
$ mkdir -p A/B/C/D/...
```


### 3.7.2 remove a directory

The default command for removing a directory is [rmdir](https://man7.org/linux/man-pages/man1/rmdir.1.html)

By default, rmdir can only be used to remove empty directories.
To solve this problem, you must first remove the files in it.

If you want to remove all non-empty directories, use 'rm - r'

```bash
$ tree [dir]
# Be careful with the -f option. Water already spilled cannot be contained.
$ rm -rf dir
```


## 3.8 View file contents


### 3.8.1 view file types

[file](https://man7.org/linux/man-pages/man1/file.1.html)

### 3.8.2 view whole of a file

* [cat](https://man7.org/linux/man-pages/man1/cat.1.html)
```bash
# line numbering
$ cat -n [file]

# if you want ignore blank lines, use -b
$ cat -b [file]

# if you dont' want replace the tab character to other, use -T
$ cat -T [fie]
```

* [more](https://man7.org/linux/man-pages/man1/more.1.html)

* [less](https://man7.org/linux/man-pages/man1/less.1.html)

less better than more..

### 3.8.3 view part of a file

* [tail](https://man7.org/linux/man-pages/man1/tail.1.html)

```bash
# How many lines do you want to display from the last?
# The default value is 10.
$ tail -n 2 [file]

# Do you want real-time detection?
# (even while another process is accessing the file)
$ tail -f [file]
```

* [head](https://man7.org/linux/man-pages/man1/head.1.html)

```bash
# for simplicity
$ head -5 [file]
```
