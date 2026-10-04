import math

alas = 5
tinggi = 12
sisi_a = tinggi
sisi_c = alas
sisi_b = int(math.hypot(sisi_a, sisi_c))

keliling = sisi_a + sisi_b + sisi_c
luas = int(0.5 * alas * tinggi)

print("diketahui")
print(f"alas = {alas} cm")
print(f"tinggi = {tinggi} cm")
print()
print("jawaban")
print(f"sisi A = {sisi_a} cm")
print(f"sisi B = {sisi_b} cm")
print(f"sisi C = {sisi_c} cm")
print(f"keliling = {keliling} cm")
print(f"luas = {luas} cm")