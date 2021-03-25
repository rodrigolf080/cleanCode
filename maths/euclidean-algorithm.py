# -- The Euclidean Algorithm
# ----
# :: Used to find the Greatest Common Divisor between 2 integers.
# ----
# 1 :: Assign the values of the numbers your want to find the gcd
# 2 :: Shift the values of the numbers:
# 2.1 :: a is now the value of b
# 2.2 :: b is now the value of the reminder of a/b
# 3 :: Repeat until the reminder of a/b is 0 , the value of b is therefore 0
# 4 :: Return a as this is the largest number that divides the initial a and b
# with a reminder of 0 as proved my the algorithm
def gcd(a, b):
    if b == 0:
      return a
    return gcd(b, a%b)
