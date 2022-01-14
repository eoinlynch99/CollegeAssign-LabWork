# Tutorial 1
# Eoin Lynch
# Program to add fractions using Lowest Common Multiple


def gcd(smaller, bigger):
    while bigger > 0:
        smaller, bigger = bigger, smaller % bigger
    return smaller


def lcm(smaller, bigger):
    return smaller * bigger / gcd(smaller, bigger)


#def addFrac()



fraction1 = (24, 512)
fraction2 = (47, 758)
