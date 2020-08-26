# Table Of Contents
* [caesar.c](#caesarc)
* [cash.c](#cashc)

## caesar.c
This program uses Caesar's Cipher to encrypt text. 

To use this program run this command:
```
./caesar.c <key>
```
**Key** represents the amount of times you want the letters to shift. &nbsp;
For example:`./caesar 1` means you want the letters to shift once to the left. 

1 = A --> B <br />
2 = A --> C <br />
4 = A --> E

This is an example of how the program functions:
```
$ ./caesar 1 
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

## cash.c
This program uses a greedy algorithm to minimize the amount of coins you're despensing for each costomer

This is an example of how the program functions:
```
$ ./cash.c
Changed owed: 0.41
4
```
### Breakdown
1. The program prompt the user for the amount of change owed
2. The program figures out the minimum amount coins to give back to the customer using a greedy algorithm
3. The program prints the results
### Note 
* The program will re-prompt if you imput negative numbers or letters:
```
$  ./cash.c 
Change owed: -0.41
Change owed: foo
Change owed: 0.41
4
```
* The program does not tell you exactly what type of coin is given back to the customer 
