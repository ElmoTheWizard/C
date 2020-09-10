# Table Of Contents
* [caesar.c](#caesarc)
* [cash.c](#cashc)
* [credit.c](#creditc)
* [purality.c](#puralityc)
* [readablity.c](#readabilityc)


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
This program uses a greedy algorithm to minimize the amount of coins you're despensing for each customer

This is an example of how the program functions:
```
$ ./cash.c
Changed owed: 0.41
4
```
### Breakdown
1. The program prompts the user for the amount of change owed
2. The program figures out the minimum amount coins to give back to the customer using a greedy algorithm
3. The program prints the results
### Note 
* The program will re-prompt the user if you imput negative numbers or letters:
```
$  ./cash.c 
Change owed: -0.41
Change owed: foo
Change owed: 0.41
4
```
* The program does not tell you exactly what type of coin is given back to the customer 

## credit.c
This program checks to see if a credit card is valid and prints the brand

This is and example of how the program functions:
```
$ ./credit.c
Number: 4003600000000014
VISA
```
### Breakdown
1. The program prompts the user for a credit card number
2. The program uses Luhn's Algorithm to find if a credit card is valid
3. The program prints the brand 
### Note 
* The program will re-prompt the user if you imput letters or numbers with dashes.
```
$ ./credit.c
Number: foo
Number: 4003-6000-0000-0014
Number: 4003600000000014
VISA
```
* The program only works with Visa, MasterCard, American Express and Amex credit cards

## purality.c
This program runs a purality election.

This is an example of how the program functions:
```
$ ./plurality Alice Bob Charlie
Number of voters: 4
Vote: Alice
Vote: Bob
Vote: Charlie
Vote: Alice
Alice
```
### Breakdown
1. The user imputs the candidates thats going to get elected. `$ ./purality <canditates>`
2. The program checks the validity of the candidates
3. The program prompts the user for amount of people that will be voting
4. The user votes for the candidate they want to win
5. The program prints the winner

### Note 
The program only accepts a maximum of 9 candidates

## readability.c
This program computes the approximate grade level needed to comprehened text the user imput

This is and example of how the program functions:
```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3

Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5

Text: As the average number of letters and words per sentence increases, the Coleman-Liau index gives the text a higher reading level. If you were to take this paragraph, for instance, which has longer words and sentences than either of the prior two examples, the formula would give the text an eleventh grade reading level.
Grade 11
```
### Breakdown
1. The program prompts the user for text
2. The program uses the Coleman-Liau Index to approximate the grade level
3. The program prints the grade level
### Note 
* If the grade level is less than 1, the program prints `Before Grade 1`
* If the grade level is greater than 16, the prgram prints ` Grade 16+`
