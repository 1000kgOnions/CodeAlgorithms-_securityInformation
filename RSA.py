def gcd(a, b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)


p = 37
q = 53
e = 47
n = p * q
phi = (p - 1) * (q - 1)
M = 41
if(gcd(phi,e)!= 1):
    print("Số nguyên e không thỏa mãn")
else:
    d = pow(e, -1, phi)
    C = M**d % n
    m = C**e % n
    print(f"PU={e},{n}")
    print(f"PR={d},{n}")
    print(f"An mã:C={C}")
    print(f"Ba giải mã:M'={m}")

