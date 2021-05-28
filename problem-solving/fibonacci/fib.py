from time import perf_counter

def fib(n):
	# This functions returns the element of fib sequence with notation of O(2n+1) = O(n)
	# This program executes once for elements lesser than 2 and two times n (element of sequence)
	# 
	# Return 1 case n is equal to 1 or 2
	if n == 1 or n == 2:
		return 1
	# Create array matrix of size n+1 where array[0] is null because this only applies to natural numbers
	matrix = [None] * (n+1)
	# Ground cases for recursion
	matrix[1] = 1
	matrix[2] = 1
	# Feel the array starting from the left at index 3 by sum of the 2 previous elements of the array
	for i in range(3, n+1):
		matrix[i] = matrix[i-1] + matrix[i-2]
	# The fib element that we are looking for will be stored and returned at array[n]
	return matrix[n]


start = perf_counter()
print (fib(200000)) #200.000th element 
end = perf_counter()
execution_time = (end - start)
print("Time elapsed: " +  str(execution_time))
