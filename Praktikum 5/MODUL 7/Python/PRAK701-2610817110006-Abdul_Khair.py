front = input("Nama Depan :")
back = input("Nama Belakang :")

full = front + " " + back

long = len((front + back).replace(" ", ""))

print("Nama lengkap :", full)
print("Panjang Nama (tanpa spasi) :", long)