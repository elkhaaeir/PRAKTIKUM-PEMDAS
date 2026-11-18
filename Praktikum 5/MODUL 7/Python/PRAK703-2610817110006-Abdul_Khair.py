sentence = input("Kalimat : ")

vocal = 0
consonant = 0

for letter in sentence.lower():
    if letter in "aiueo":
        vocal += 1
    elif letter >= 'a' and letter <= 'z':
        consonant += 1

print("Jumlah Vokal :", vocal)
print("Jumlah Konsonan :", consonant)