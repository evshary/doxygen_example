# doxygen example

## syntax

* doxygen will the comment in the block closed by `/**` and `*/`.
* `@keyword` or `\keyword` will generate different function in doxygen.
  - `@mainpage`: The main page
  - `@page`: New page
  - `@code` and `@endcode`: Where you put your code 
  - `@file`: create file for the source code
  - `@brief`: function introduction

## usage

* generate doxygen

```bash
# Generate Doxygen template file
doxygen -g
# Modify the template file
vim Doxygen
# Generate output files
doxygen Doxyfile
```

## Doxyfile

* PROJECT_NAME: My project name
* PROJECT_BRIEF: Brief introduction
* EXCLUDE: Ignore some files

## reference

* [Official Website](https://www.doxygen.nl/index.html)
* [Doxygen 程式文件產生器 與 簡易筆記](https://blog.longwin.com.tw/2011/04/doxygen-document-generator-2011/)
