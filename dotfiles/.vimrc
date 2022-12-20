" File              : .vimrc
" Author            : cppygod
" Date              : 22.01.2022
" Last Modified Date: 19.12.2022
" Last Modified By  : cppygod

syntax on 
filetype plugin indent on 
set tabstop=4
set expandtab
set softtabstop=2
set shiftwidth=2
set autoindent
set smartindent
set backspace=indent,eol,start
set title
set noswapfile
set autoread
set cursorline
set encoding=utf-8 
"set nu!
"set mouse=a

" ----------------------------------------------------------------------

" Some important key bindings
inoremap <C-s> <esc>:w<cr>                 " save files
nnoremap <C-s> :w<cr>
inoremap <C-d> <esc>:wq!<cr>               " save and exit
nnoremap <C-d> :wq!<cr>
inoremap <C-q> <esc>:qa!<cr>               " quit discarding changes
nnoremap <C-q> :qa!<cr>"
map <C-s> :write<CR>

" ----------------------------------------------------------------------

" PLUGIN INSTALLATIONS
call plug#begin('~/.vim/plugged')

Plug 'jiangmiao/auto-pairs'

" Color Schemes
Plug 'gruvbox-community/gruvbox'
Plug 'kaicataldo/material.vim'
Plug 'dracula/vim'
Plug 'sickill/vim-monokai'

" NerdTree
Plug 'preservim/nerdtree'


" Status Bars in VIM
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'

" VIM Snippets
Plug 'terroo/vim-simple-emoji'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'ervandew/supertab'
Plug 'alpertuna/vim-header'
Plug 'ctrlpvim/ctrlp.vim'

" Auto-Complete Engine 
"Plug 'ycm-core/YouCompleteMe'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
call plug#end()

" ----------------------------------------------------------------------
" COLOR SCHEMES

set termguicolors
colo gruvbox

" ----------------------------------------------------------------------
" NerdTree Settings
inoremap <c-b> <Esc>: NERDTreeToggle<cr>
nnoremap <c-b> <Esc>: NERDTreeToggle<cr>

" ----------------------------------------------------------------------
" use <tab> for trigger completion and navigate to the next complete item 
" Use tab for trigger completion with characters ahead and navigate
" NOTE: There's always complete item selected by default, you may want to enable
" no select by `"suggest.noselect": true` in your configuration file
" NOTE: Use command ':verbose imap <tab>' to make sure tab is not mapped by
" other plugin before putting this into your config
inoremap <silent><expr> <TAB>
      \ coc#pum#visible() ? coc#pum#next(1) :
      \ CheckBackspace() ? "\<Tab>" :
      \ coc#refresh()
inoremap <expr><S-TAB> coc#pum#visible() ? coc#pum#prev(1) : "\<C-h>"

" Make <CR> to accept selected completion item or notify coc.nvim to format
" <C-g>u breaks current undo, please make your own choice
inoremap <silent><expr> <CR> coc#pum#visible() ? coc#pum#confirm()
                              \: "\<C-g>u\<CR>\<c-r>=coc#on_enter()\<CR>"

function! CheckBackspace() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction




" ----------------------------------------------------------------------

" Settings for header
"let g:header_field_author = 'cppygod'
"map <C-H> :AddHeader<CR>
"let g:header_auto_add_header = 0

" ----------------------------------------------------------------------
" YCM Auto-Complete features
"let g:ycm_global_ycm_extra_conf = '~/.vim/.ycm_extra_conf.py'
"set completeopt-=preview
"let g:ycm_show_diagnostics_ui = 0
"let g:ycm_clangd_binary_path=trim(system('brew --prefix llvm')).'/bin/clangd'
"let g:ycm_max_diagnostics_to_display = 30
"This setting is for auto-complete enter
"inoremap <expr><CR> pumvisible() ? "\<C-Y>" : "\<CR>"
"let g:ycm_language_server =
"  \ [{
"  \   'name': 'ccls',
"  \   'cmdline': [ 'ccls' ],
"  \   'filetypes': [ 'c', 'cpp', 'cc', 'h', 'hpp' ],
"  \   'project_root_files': [ '.ccls-root', 'compile_commands.json' ]
"  \ }]
" Settings for UltiSnips
"let g:UltiSnipsExpandTrigger="<c-j>"
"vnoremap <silent> # :s/^/#/<cr>:noh<cr>
"vnoremap <silent> -# :s/^#//<cr>:noh<cr>
" Smart mapping for Ctrl+W
" For opening terminal
"nmap <space>tt :below vertical terminal<CR>
" ----------------------------------------------------------------------
