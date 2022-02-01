" File              : .vimrc
" Author            : cppygod
" Date              : 22.01.2022
" Last Modified Date: 31.01.2022
" Last Modified By  : cppygod
set backspace=indent,eol,start
"set nu!
"set mouse=a
set title
set cursorline
set encoding=utf-8 " Important to YCM
set noswapfile

" YCM Auto-Complete features
let g:ycm_global_ycm_extra_conf = '~/.vim/.ycm_extra_conf.py'
set completeopt-=preview
"let g:ycm_show_diagnostics_ui = 0
let g:ycm_clangd_binary_path=trim(system('brew --prefix llvm')).'/bin/clangd'
let g:ycm_max_diagnostics_to_display = 30

"This setting is for auto-complete enter
inoremap <expr><CR> pumvisible() ? "\<C-Y>" : "\<CR>"

let g:ycm_language_server =
  \ [{
  \   'name': 'ccls',
  \   'cmdline': [ 'ccls' ],
  \   'filetypes': [ 'c', 'cpp', 'cc', 'h', 'hpp' ],
  \   'project_root_files': [ '.ccls-root', 'compile_commands.json' ]
  \ }]

" Settings for UltiSnips
let g:UltiSnipsExpandTrigger="<c-j>"


" Settings for header
let g:header_field_author = 'cppygod'
map <C-H> :AddHeader<CR>
let g:header_auto_add_header = 1

" Some important key bindings
inoremap <C-s> <esc>:w<cr>                 " save files
nnoremap <C-s> :w<cr>
inoremap <C-d> <esc>:wq!<cr>               " save and exit
nnoremap <C-d> :wq!<cr>
inoremap <C-q> <esc>:qa!<cr>               " quit discarding changes
nnoremap <C-q> :qa!<cr>"

" Settings for netrw / NERDTREE - A Project Explorer of choice

let g:netrw_banner = 0
let g:netrw_liststyle = 3
let g:netrw_browse_split = 2
let g:netrw_altv = 1
let g:netrw_winsize = 50
"augroup ProjectDrawer
"  autocmd!
"  autocmd VimEnter * :Vexplore
"augroup END

"colorscheme monokai

" PLUGIN INSTALLATIONS

call plug#begin('~/.vim/plugged')
" Here will be only plugins

" Sample initial plugin
Plug 'terroo/vim-simple-emoji'
Plug 'jiangmiao/auto-pairs'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'ervandew/supertab'
Plug 'ycm-core/YouCompleteMe'
Plug 'alpertuna/vim-header'
Plug 'ctrlpvim/ctrlp.vim'
call plug#end()

map <C-s> :write<CR>
