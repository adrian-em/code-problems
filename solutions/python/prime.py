def is_prime(p):
    for i in range(2, p+1):
        if p % i == 0 and p != i:
            return False
    return True

for i in range(1, 101):
    print "{0} -> {1}".format(i, is_prime(i))
        
    