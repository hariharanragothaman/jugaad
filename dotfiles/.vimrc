" File              : .vimrc
" Author            : cppygod
" Date              : 21.01.2022
" Last Modified Date: 21.01.2022
" Last Modified By  : cppygod
set nocompatible
set hidden
syntax on
set colorcolumn=120
set hlsearch
set ic
set encoding=utf-8
set t_Co=256
syntax enable
set number
set ruler
set ttyfast
set autoindent
set cursorline
set noswapfile
set title
set cursorline
set nu!
set showmatch
set encoding=utf-8 " Important to YCM
set completeopt-=preview

" Testing it out some auto-complete featurese
" https://stackoverflow.com/questions/58890217/how-to-prevent-vim-from-jumping-to-next-line-when-auto-completing-words-using
inoremap <expr><CR> pumvisible() ? "\<C-Y>" : "\<CR>"

" Settings for header
let g:header_field_author = 'cppygod'
map <C-H> :AddHeader<CR>
let g:header_auto_add_header = 1

call plug#begin('~/.vim/plugged')
" Here will be only plugins

" Sample initial plugin
Plug 'terroo/vim-simple-emoji'
Plug 'matsuuu/pinkmare'
Plug 'ycm-core/YouCompleteMe'
Plug 'jiangmiao/auto-pairs'
Plug 'alpertuna/vim-header'
Plug 'ctrlpvim/ctrlp.vim'
call plug#end()
