# Project Outline and Details

The purpose of this document is to outline the structure of this project and to serve as a design guideline.

## Tokenizer

1) Split up the file by whitespace
2) Pass each string to a factory class to split up further. Either:
   - The string **is** a token. Parse it.
   - The string is a combination of multiple tokens. <!--TODO-->
