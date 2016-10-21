
if [ $TERM="xterm-256color" ]
then
    PS1='\[\033[01;38;5;61m\]\u@\h\[\033[01;38;5;107m\] \w\n\$\[\033[01;38;5;248m\]'
fi

LS_OPTIONS='--color'
export LS_OPTIONS

alias ls="ls $LS_OPTIONS"
alias l="ls -lh"
alias ll="ls -l"
alias la='ls -alh'
alias c7='chmod 777'
alias c5='chmod 755'
alias c4='chmod 644'
alias c0='chmod 700'
alias c0f='chmod 600'
alias dh='du -h'
alias eb='vi ~/.bashrc'
alias ep='vi ~/.bash_profile'
alias sb='source ~/.bashrc '
alias h='head'
alias k9='kill -9'
alias les="less -RS"
alias le='les'
alias ln='ln -s'
alias wl="wc -l"
alias a="cd .. && l"
alias b='cd - && l'
alias pp="pu $USER"
alias i='dirs -c && pushd .'
alias o='dirs -c'
alias p='pushd'
alias rd="rm -rf"
alias t="tail"
alias vi="/usr/bin/vim"
alias py="python"

