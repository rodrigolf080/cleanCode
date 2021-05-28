i=1
while (i<=100):
	i+=1
	res=""
	flag=False

	if i%3==0:
		res+="Fizz"
		flag=True
	if i%5==0:
		res+="Buzz"
		flag=True

	if flag==False:
		res=str(i)

	print(res)
