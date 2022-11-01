for x in range(3):
    banyakN, kelipatan = input().split()
    banyakN = int(banyakN)
    kelipatan = int(kelipatan)
    hasil = 0
    hasil2 = 0
    hasil3 = 0
    i = 0
    while i < banyakN:
        i += 1
        j = i
        if i == 0:
            break
        while j > 0:
            j -= 1
            print("(%d * %d)" % (j + 1, kelipatan), end=" ")
            if j > 0:
                print(" + ", end=" ")
        hasil = i * kelipatan
        hasil2 += hasil
        print(" = %d" % (hasil2))
        hasil3 += hasil2
    print("%d" % (hasil3))
    print(" ")