import random
def PermuteThis(permutable,path=[]):
	for i in range(0,len(permutable)):
		if(len(path) < 3):
			path.append(permutable[i])
			yield from PermuteThis(permutable[0:i] + permutable[i+1:len(permutable)],path)
		else:
			print("\n")
	if(len(path) == 3):
		yield path
	if(len(path) != 0):
		path.pop()


y = ["r","g","b"]
x = PermuteThis(y)
for i in x:
	print (i,end ="")
