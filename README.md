# scat
- simple and small cat clon with less than 100 loC
- originalLy written in 1h

## Goals
- [x] view one file
- [ ] view more files
- [ ] Posix Compatabity

## Usage
`$ scat <file>` to view a file

## Building & installing
### 1. Clone into repository 
`$ git clone https://github.com/bkdevel/scat.git`
### 2. Build repository 
- use an make tool(bmake(my preferred choice), dmake, gmake)
- Note: by default clang is used if you do not have a C-Compiler installed set CC in the makefile to cc. On MacOS X you might run > **xcode-select --install** additionally
- `$ make ./scat`
### 3. Install it
- move ./scat to /usr/local/bin/scat
`# mv ./scat /usr/local/bin/scat`
### 4. Finnished
- you are now finnshed
