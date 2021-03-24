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
iteration = 0
def gcd(a, b):
    global iteration
    iteration += 1
    if b == 0:
      return a
    print(f"Iteration: {iteration} :: a is {a} :: b is {b} :: Remainder is {a%b}")
    return gcd(b, a%b)

print("Welcome to the Euclidean Algorithm Simulator!");
a = input("\nPlease enter a value of a: ")
if a == "quit":
  sys.exit("Gracefullly quitting...")
b = input("\nPlease enter a value for b: ")
if b == "quit":
  sys.exit("Gracefully quitting...")

a = int(a)
b = int(b)
res = gcd(a,b)
print(f"\nThe Greatest Common Divider of {a} and {b} is {res}")
