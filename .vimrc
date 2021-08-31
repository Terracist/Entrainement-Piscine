set number
syntax enable
filetype plugin indent on
set tabstop=4
set shiftwidth=4
set noexpandtab
set noerrorbells
set wildmenu
set showcmd
set ignorecase
set smartcase
set autoindent
set scrolloff=4
set history=1000
set noswapfile
set mouse=a

inoremap ` int main(int argc, char **argv)
inoremap @ int main(void)
inoremap #i #include <>
inoremap #l #include ""
inoremap rx return();

"Dracula Theme for vim
packadd! dracula
colorscheme dracula
