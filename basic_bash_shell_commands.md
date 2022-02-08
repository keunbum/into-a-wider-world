# Basic Bash Shell commands

## Start the shell

The GNU bash shell is a program that allows you to interactively connect to a Linux system. The bash shell is run as a regular program, usually every time the user logs into the terminal. The shell that the system launches depends on the configuration of the user ID. This can be found in the /etc/passwd file.

## Use the shell prompt

If you run the terminal pakage or log in to the Linux virtual console, you will be connected to the shell CLI prompt.
This prompt is the gateway to the shell and is where you enter shell commands.

The default prompt symbol in the bash shell is the dollar sign($). This symbol indicates that it is waiting for shell text input.

## Interact with man page

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

## Explore file system

### Linux file system

Common Linux directory names are based on the FHS(Filesystem Hierarchy Standard).

### directory


## View a list of files and directories
