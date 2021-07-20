#!/usr/bin/python3
# program :: collatz sequence
# input :: int x
# output :: list generated from x to 1

def __main__():
  nums = []

  print("\n**** Collatz Sequence *****\n")
  x = int(input("[+] Enter an integer\n>>> "))

  collatz(x, nums)

  print("---- Start ---- ")
  for n in nums:
    print(n)
  print("---- End ---- ")

def collatz(x, lst):
  lst.append(x)
  if x % 2 == 0: # pair
    x = x // 2
  else: ##impair
    x = 3 * x + 1
  if x == 1:
    lst.append(x)
    return
  else:
    collatz(x, lst)



__main__()
