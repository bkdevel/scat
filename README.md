# scat
- simple and small cat clon with less than 100 loC
- originalLy written in a few minutes

## Goals
- [x] view one file
- [x] view more files
- [ ] Posix Compliance

## Usage
`$ scat <file>` to view a file

## Building & installing
NOTE: you can skip the building & cloning part if you download the binary from <a href=https://github.com/bkdevel/scat/releases/download/pre-0.1/scat>here</a>. (The binary was built on Linux openSUSE Tumbelweed, and has not been tested anywhere else)
If the binary does not work, try building it yourself.
### 1. Clone into repository 
`$ git clone https://github.com/bkdevel/scat.git`
### 2. Build repository 
- use an make tool(bmake(my preferred choice), dmake, gmake)
- Note: by default clang is used if you do not have a C-Compiler installed set CC in the makefile to cc. On MacOS X you might run > **xcode-select --install** additionally
- `$ make ./scat`
### 3. Install it
- move ./scat to /usr/local/bin/scat
`# mv ./scat /usr/local/bin/scat`
