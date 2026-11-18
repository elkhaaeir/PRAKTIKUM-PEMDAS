word = input()

original = word
word = word.lower()

if word == word[::-1]:
    print("Kata '" + original + "' adalah palindrom")
else:
    print("Kata '" + original + "' bukan palindrom")