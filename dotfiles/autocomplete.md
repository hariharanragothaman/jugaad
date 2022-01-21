
### Basic Installation

```
sudo apt update && sudo apt upgrade -y && sudo apt clean && sudo apt autoclean && sudo apt autoremove -y
sudo apt install vim curl git wget
curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim

```

### Copy the .vimrc from this repository

### Install fonts

```
git clone https://github.com/terroo/fonts
cd fonts
mv fonts ~/.local/share/fonts
cd && rm -rf fonts
fc-cache -fv
```

```
sudo apt install gcc g++ cmake make build-essential vim-nox python3-dev
cd .vim/plugged/YouCompleteMe/
python3 install.py --clangd-completer # Only C/C++
```

### Add necessary includes

```
'-I/usr/include/gtkmm-3.0',
'-I./',
'-I/usr/include'
```

### Some other options

```
let g:ycm_global_ycm_extra_conf = '~/.vim/.ycm_extra_conf.py'
set completeopt-=preview
let g:ycm_show_diagnostics_ui = 0

```

