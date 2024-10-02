# OCaml without Stdlib

This repository demonstrates minimal OCaml project without linking with standard library 
using the `-nostdlib -nopervasives` flags.  You won't have access to functions, 
but you will have access to types. 

```console
$ dune exec ./main.exe
```