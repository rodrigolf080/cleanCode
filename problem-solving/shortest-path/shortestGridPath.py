# Input :: integer n, integer m;
# Solves total amount of paths
# From one corner to the other of the grid
# Can't move diagonally 
# Output total amount integer
def grid_path(n,m):
	if n==1 or m==1:
		return 1
	return solve(n,m-1) + solve(n-1,m)

