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
                                                                                                                        
                                                                                                                        
call plug#begin('~/.vim/plugged')                                                                                       
" Here will be only plugins                                                                                             
                                                                                                                        
" Sample initial plugin                                                                                                 
Plug 'terroo/vim-simple-emoji'                                                                                          
Plug 'matsuuu/pinkmare'                                                                                                 
Plug 'ycm-core/YouCompleteMe'                                                                                           
Plug 'jiangmiao/auto-pairs'                                                                                             
call plug#end()
