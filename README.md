# scat
a simple and small cat clon with less than 100 loC.

## Usage
- [x] view files
- [ ] write to files
`$ scat <file>` to view a file

## Building & installing
### 1. Clone into repository 
`$ git clone https://github.com/bkdevel/scat**`
### 2. Build repository 
- use an make tool(bmake(my preferred choice), dmake, gmake)
- Note: by default clang is used if you do not have a C-Compiler installed set CC in the makefile to cc. On MacOS X you might run > **xcode-select --install** additionally
- `$ make ./scat`
### 3. Install it
- move ./scat to /usr/local/bin/scat
`# mv ./scat /usr/local/bin/scat`
### 4. Finnished
- you are now finnshed
