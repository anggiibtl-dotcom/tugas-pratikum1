import math

putaran = 5
jarak = 14
keliling = jarak / putaran
jari_jari = keliling / (2 * math.pi)

print(f"diketahui:")
print("Pak Dengklek mengelilingi taman = %d putaran" % putaran)
print("jarak yang ditempuh Pak Dengklek = %d kilometer" % jarak)
print()
print("jawaban")
print("Jari-jari yang dikelilingi Pak Dengklek adalah %.2f kilometer" % jari_jari)