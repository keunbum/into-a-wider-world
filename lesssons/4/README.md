# More bash shell commands

## 4.1 Monitoring the program

### 4.1.1 peek at the process

`[ps](https://man7.org/linux/man-pages/man1/ps.1.html)` - report a snapshot of the current processes.

The default output shows the process ID, the terminal it ran on, and the CPU time used by the process.

#### UNIX style options

There are a lot of options.
The key to using the ps command is not to memorize all the available options.

```bash
# for example..
$ ps -ef

# also note
$ ps -l
```

#### BSD style options

```bash
$ ps l
```


#### GNU style options

```bash
# for example..
$ ps --forest
```


### 4.1.2 real-time process monitoring

`[top](https://man7.org/linux/man-pages/man1/top.1.html)`

### 4.1.3 stop the process

#### Table 4.4. linux process signal

| signal | name |                  explanation                  |
|:------:|:----:|:---------------------------------------------:|
|    1   | HUP  | disconnected                                  |
|    2   | INT  | interrupt                                     |
|    3   | QUIT | stop running                                  |
|    9   | KILL | end uncoditionally                            |
|   11   | SEGV | create a segment violation                    |
|   15   | TERM | shut down if possible                         |
|   17   | STOP | abort unconditionally, but not terminate      |
|   18   | TSTP | abort or pause but keep running in backgournd |
|   19   | CONT | resume execution after STOP of TSTP           |


`[kill](https://man7.org/linux/man-pages/man1/kill.1.html)` - send a signal to a process(terminate a process)

```bash
$ kill -s HUP [pid]
```

`[killall](https://man7.org/linux/man-pages/man1/killall.1.html)` - kill processes by name


## 4.2 Disk Space Monitoring
