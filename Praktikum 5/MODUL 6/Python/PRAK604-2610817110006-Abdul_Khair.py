code = input()
message = input()

star = 0
hashtag = 0

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for  i in range(len(code)):
        if code[i] == " " and message[i] == " ":
            print(" ", end="")
        elif code[i] == message[i]:
            print("*", end="")
            star += 1
        else:
            print("#", end="")
            hashtag += 1

    print("\n*=" + str(star))
    print("#=" + str(hashtag))

    if star >= hashtag:
        print("pesan asli")
    else:
        print("pesan palsu")