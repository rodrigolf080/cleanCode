import random

nums = []
for _ in range(1024):
  nums.append(random.randint(0, 4096))

p = []
np = []
for n in nums:
  if n % 2 == 0:
    p.append(n)
  else:
    np.append(n)

print(f"P: %d" % len(p))
print(f"NP: %d" % len(np))
if len(p) > len(np):
  print("P > NP")
else:
  print("NP > P")
