# sudoku-verifier
This program verifies a solution to a regular 9x9 sudoku puzzle.

## Getting Started

### Prerequisites

* GCC
* UNIX Shell OR Windows PowerShell

### Download source code and compile
The following instructions are presented using Bash in macOS:
```
# Change to HOME directory
$ cd ~

# Clone this repo and 'cd' into it
$ git clone https://github.com/jellycsc/sudoku-verifier.git
$ cd sudoku-verifier/

# Let's compile.
$ gcc -Wall -std=gnu99 -o sudoku sudoku.c sudoku_helpers.c
```

### Usage
```
Usage: sudoku
```

### Example
```
$ ./sudoku
ROW #3 is invalid.
Invalid Sudoku
```

## Author(s)

| Name                    | GitHub                                     | Email
| ----------------------- | ------------------------------------------ | -------------------------
| Chenjie (Jack) Ni       | [jellycsc](https://github.com/jellycsc)    | nichenjie2013@gmail.com

## Thoughts and future improvements

* Since this is a rather simple beginner's project, no further improvements will be made.

## Contributing to this project

1. Fork it [![GitHub forks](https://img.shields.io/github/forks/jellycsc/sudoku-verifier.svg?style=social&label=Fork&maxAge=2592000)](https://github.com/jellycsc/sudoku-verifier/fork)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -m 'Add some feature'`)
4. Push to your feature branch (`git push origin my-new-feature`)
5. Create a new Pull Request

Details are described [here](https://git-scm.com/book/en/v2/GitHub-Contributing-to-a-Project).

## Bug Reporting [![GitHub issues](https://img.shields.io/github/issues/jellycsc/sudoku-verifier.svg)](https://github.com/jellycsc/sudoku-verifier/issues/)

Please click `issue` button above↑ to report any issues related to this project  
OR you can shoot an email to <nichenjie2013@gmail.com>

## License
This project is licensed under GNU General Public License v3.0 - see [LICENSE](LICENSE) file for more details.
