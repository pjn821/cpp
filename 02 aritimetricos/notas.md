## c++
```cpp
#include <iostream> // includes c++ standard library
// i - input
// o - output

// std::cout
// std::cin

int main() {}

```

## c# vs c++
what's `Console.DigitalRead` -> ?
what's `Console.DigitalWrite`?
```c#
string name;

name = Console.ReadLine();
```

what's `cout`? - console out
escreve mensagem no cout e vai sair na saida do terminal

what's `cin`? - console in
pra eu escrever no terminal uma informacao

## console/terminal
program running called shell/bash/zshell
input/entrada 
output/saida
```sh
pwd
> /home/admin/Documents # cout - console out - do programa pwd

```

## how to run c++ program
the computer can't run the `program.cpp` because it doesn't understand the text
 
so we need to transform it to a format the computer understands

Vscode - Run code (Ctrl+Alt+N)

OR

```sh
g++ <code-file.cpp> -o <name-of-the-output>
# will create a name-of-the-output.exe
```

then we can run the file
```sh
.\name-of-the-output.exe
```

## perguntas/questions
- [ ] what's the command to run a c++ program
Ctrl+Alt+N or
g++ <code-file.cpp> -o <name-of-the-output>
- [ ] what's `#include <iostream>` for?
  para chamar biblioteca
- [ ] how to select code and comment on vscode
ctrl + k + c // comenta
ctrl + k + u // descomenta
- [ ] how declare list of `char` in c++
char name[20]; or #include <string>; std::string name;
- [ ] the computer doesn't understand `text`, what format does it understand?
0 and 1.
  - [ ] what do we call the process to convert text to the format the computer understands?
  terminal é o tradutor que traduz lingua humana para binaria e vice versa.
  - [ ] why does c++ code need to be converted?
  because c++ foi feita for human and no for pc
- [ ] Do all languages need to be converted to another format?

- [ ] what does `<iostream>` mean
input/output stream
Ela permite usar:
std::cout  // permite escrever no terminal
std::cin   // permite ler no terminal


