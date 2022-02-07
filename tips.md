# Tips
I would like to write some small tips in Debian/Ubuntu distribution.

## vim

### vimrc

```vimrc
" a setting just for me
" hmm... can't I have different options for different file types?

set tabstop=2
set shiftwidth=2
set autoindent
```


## git

### ```init.defaultBranch``` from [2.28.0](https://github.blog/2020-07-27-highlights-from-git-2-28/)

A new configuration option, which is being introduced to replace the hard-coded term.
[Times are changing.](https://sfconservancy.org/news/2020/jun/23/gitbranchname/)

```bash
# to configure the initial branch name to use in your new repos
$ git config --global init.defaultBranch [name]
```

### up to date

```bash
$ add-apt-repository ppa:git-core/ppa
```


## gcc/g++

### before install

```bash
$ apt update
$ apt install build-essential
```

### up to date

```bash
$ apt install software-properties-common
$ add-apt-repository ppa:ubuntu-tollchain-r/test
```
