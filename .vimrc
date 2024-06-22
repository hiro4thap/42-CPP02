set hlsearch
set ignorecase
set showcmd
set history=1000
set softtabstop=4
set shiftwidth=4
set tabstop=4
set mouse=a
set number
set title
set smartindent
set syntax=on
colorscheme ron
set noeb vb t_vb=
set cursorline

if has("gui_running")
	if has("gui_gtk2")
		set guifont=Inconsolata\ 12
	elseif has("gui_macvim")
		set guifont=Menlo\ Regular:h14
	elseif has("gui_win32")
		set guifont=Consolas:h11:cANSI
	endif
endif

call plug#begin()
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'vim-airline/vim-airline'
Plug '42Paris/42header' 
call plug#end()

nnoremap <C-P> :Files <CR>
nnoremap <C-N> :bp <CR>
nnoremap <C-H> :bn <CR>
nnoremap <C-B> :Buffers<CR>
