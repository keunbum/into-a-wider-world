# 5. Understand Shell

## 5.1 Explore the types of shells

The shell program that the system runs depends on the configuration of the user ID.
In the /etc/passwd file, the seventh field for each user ID indicates which default shell program to run.
The default shell program runs whenever the user logs into a virtual console terminal or enters the GUI's terminal emulator.

```bash
$ ls -lF /bin/bash

$ ls -lF /bin/tcsh

$ ls -lF /bin/dash

$ ls -lF /bin/sh


$ /bin/sh
$ exit (or Ctrl-d)
$
```


## 5.2 Explore the relationship between parent and child shells

### 5.2.0 concept

The default shell program executed when the user logs into a virtual console terminal or starts the GUI's terminal emulator
is the parent shell.

When a child shell precess is executed, certain part of the parent shell environment is copied to the child shell environment.
This can cause problems for things like variables.

[exit(1p)](https://man7.org/linux/man-pages/man1/exit.1p.html)

```bash
$ exit [n]
```
When the shell script is executed, a subshell is created.
You can create subshells without using bash shell commands or shell scripts. One way is to use the process list.

### 5.2.1 explore process list

A list of commands to be executed sequentially can be specified on a single line.
You can enter a list of commands by using semicolons(;) between commands.

```bash
$ pwd; ls; cd /etc; pwd; cd; pwd; ls
```

In the above example, the commands were executed sequentially without any problems, but this is not a list of processes.
For a command list to be considered a process list, the commands must be enclosed in parentheses.

```bash
# if you run it, the current directory is the same.
$ (pwd; ls; cd /etc; pwd; cd; pwd; ls)
```

If you add parentheses to turn list of commands into a list of processes, the commands are executed in a subshell.

A command using an environment variable is needed to indicate whether a child shell has been created. The required
command is `echo $BASH_SUBSHELL`. Returning 0 means there is no subshell, and returning 1 or more means ther is a subshell.

```bash
$ pwd; ls; cd /etc; pwd; cd; pwd; ls; echo $BASH_SUBSHELL
.
.
.
0

$ (pwd; ls; cd /etc; pwd; cd; pwd; ls; echo $BASH_SUBSHELL)
.
.
.
1
```

A process list is a group of commands enclosed in parentheses that creates a subshell to run it.
You can even create grandchild subshells by enclosing them in parentheses again within the process list.

```bash
$ (pwd; echo $BASH_SUBSHELL)
...
1
$ (pwd; (echo $BASH_SUBSHELL))
...
2
```

Subshells are used for multiprocessing in shell scripts, but using subshells at a cost. Because it makes processing quite
slow. The subshell problem also exists in interactive CLI shell sessions. This is not true multiprocessing. This is because
the terminal is bound to the input and output of the subshell.

### 5.2.2 use the subshells creatively

#### 5.2.2.1 background mode

A classic command to illustrate the concept of the backgound mode:

[sleep](https://man7.org/linux/man-pages/man1/sleep.1.html) - delay for a specified amount of time

If you want the command to run in background mode, add an '&' character at the end.

```bash
$ sleep 60&
[1] ~~~
$ ps -f
```

[jobs(1p)](https://man7.org/linux/man-pages/man1/jobs.1p.html) - display status of jobs in the current session


#### 5.2.2.2 put the process list in background mode

```bash
$ (sleep 2; echo $BASH_SUBSHELL; sleep 2)

# It's hard to fully understand...
$ (sleep 2; echo $BASH_SUBSHELL; sleep 2)&
```

#### 5.2.2.3 explore co-processing


## 5.3 Explore built-in shell commands

### 5.3.1 explore external commands

### 5.3.2 explore built-in commands

