# More bash shell commands

## 4.1 Monitoring the program

### 4.1.1 peek at the process

[ps](https://man7.org/linux/man-pages/man1/ps.1.html) - report a snapshot of the current processes.

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

[top](https://man7.org/linux/man-pages/man1/top.1.html)

### 4.1.3 stop the process

#### Table 4.4. linux process signal

| signal | name | explanation                                   |
|--------|------|-----------------------------------------------|
| 1      | HUP  | disconnected                                  |
| 2      | INT  | interrupt                                     |
| 3      | QUIT | stop running                                  |
| 9      | KILL | end uncoditionally                            |
| 11     | SEGV | create a segment violation                    |
| 15     | TERM | shut down if possible                         |
| 17     | STOP | abort unconditionally, but not terminate      |
| 18     | TSTP | abort or pause but keep running in backgournd |
| 19     | CONT | resume execution after STOP of TSTP           |

[kill](https://man7.org/linux/man-pages/man1/kill.1.html) - send a signal to a process(terminate a process)

```bash
$ kill -s HUP [pid]
```

[killall](https://man7.org/linux/man-pages/man1/killall.1.html) - kill processes by name

```bash
$ killall [name]
```


## 4.2 Disk Space Monitoring

### 4.2.1 media mount

[mount](https://man7.org/linux/man-pages/man8/mount.8.html) - mount a filesystem

```bash
$ mount
```

[umount](https://man7.org/linux/man-pages/man8/umount.8.html) - unmount a filesystem

### 4.2.2 df command

```bash
$ df -h
```

### 4.2.3 du command

[du](https://man7.org/linux/man-pages/man1/du.1.html) - estimate file space usage

```bash
$ du -h

$ du -c

$ du -s
```


## 4.3 Work with data files

### 4.3.1 soring data

[sort](https://man7.org/linux/man-pages/man1/sort.1.html) - sort lines of text files

```bash
# character-sort
$ sort [file]

# numeric-sort
$ sort -n [file]

# month-sort
# compare (unknown) < 'JAN' < ... < 'DEC'
$ sort -M [file]


# some examples

# if you want to sort by the third field of data, the userID,
# -k based on 1-indexed
$ sort -t ':' -k 3 -n /etc/passwd

# sort results
# -r: reversed
$ du -sh | sort -nr
```

### 4.3.2 searching data

[grep](https://man7.org/linux/man-pages/man1/grep.1.html) - print lines that match patterns

```bash
$ grep [option] pattern [file]
```

see also:
[egrep](https://man7.org/linux/man-pages/man1/grep.1.html)

### 4.3.3 compress data

#### Table 4-7. Linux compression utility

| utility  | file extension | explanation                                                                            |
|----------|----------------|----------------------------------------------------------------------------------------|
| bzip2    | .bz2           | It uses the Burrows-Wheeler block-sorted text compression algorithm and Huffman Coding |
| compress | .Z             | Original Unix file compression utility. declining trend                                |
| gzip     | .gz            | Compression utility from the GNU Project. Lempel-Ziv Coding is used                    |
| zip      | .zip           | Unix version of PKZIP for Windows                                                      |

```bash
$ gzip [file]
```

### 4.3.4 data archive

[tar](https://man7.org/linux/man-pages/man1/tar.1.html) - an archiving utility

```bash
# some examples..

$ tar -cvf test.tar test/ test2/

$ tar -tf test.tar

$ tar -xvf test.tar

# if you encounter a file ending in tgz or tar.gz
$ tar -zxvf filname.tgz
```
