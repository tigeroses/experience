set nocompatible    "Use Vim settings, rather then Vi settings (much better!).
syntax on           "show syntax
set nu              "show line number
set tabstop=4       "<tab> width
filetype plugin indent on
set autoindent      "set automatic indent
set smartindent cinwords=if,elif,else,for,while,try,except,finally,def,class
set softtabstop=4   
set expandtab       
set ruler
set shiftwidth=4    "autoindent width
set cindent         "C style indent
set sm              "show matched bracket
set smarttab
set fileformats=unix
set backspace=indent,eol,start
set incsearch
set fencs=utf-8,ucs-bom,euc-jp,gb18030,gbk,gb2312,cp936 "set coding

set t_Co=256 "Use 256 color
colorscheme lucius "set ColorScheme
set viminfo='1000,<800

"return the position last edit
au BufReadPost * if line("'\"") > 0|if line("'\"") <= line("$")|exe("norm '\"")|else|exe "norm $"|endif|endif

set hlsearch
