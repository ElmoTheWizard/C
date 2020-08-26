# Table Of Contents
* [caesar.c](#caesarc)

## caesar.c
This program uses Caesar's Cipher to encrypt text. 

To use follow run this command:
```
./caesar.c <key>
```
Key represents the amount of times you want the letters to shift. &nbsp;
For example:`./caesar 1` means you want the letters to shift once to the left. 

1 = A --> B <br />
2 = A --> C <br />
4 = A --> E

This is an example of how the program functions:
```
$ ./caesar 1` 
PlainText: hello
CipheredText: ifmmp
```
If you fail to provide a number for the key, it will give you this message:
```
Usage: ./caesar key
```
### Note
There is bug in this program:

* If you imput a special character in Plaintext, it will not read and print it in CipheredText <br />
Example:
 ``` 
 PlainText: hello???
 CipheredText: ifmmp 
 ```
 But this bug is beyond my skills to solve right now.
