def PermuteThis(permutable,path=[]):
	for i in range(0,len(permutable)):
		if(len(path) < 3):
			path.append(permutable[i])
			yield from PermuteThis(permutable[0:i] + permutable[i+1:len(permutable)],path)
	yield path
	if(len(path) != 0):
		path.pop()

def addition(addMe):
	count = 0
	for i in addMe:
		count= count +i
	return count
ghostes = [4,8,1,9,16,13,19]
submarine = 25
#ghostes = [4,1,3,2]
#submarine = 7

HowFit = []
#room for tea
submarineAdjusted = submarine-1
x = PermuteThis(ghostes)
'''
HowFit.append(["hey","hey2"])
print ((HowFit.append(["hey","hey2"])))
print (HowFit)
'''
for i in x:
	HowFit.append(i + [])
#print (HowFit)
top = []
for i in HowFit:
	if((addition(i) > addition(top) and addition(i) <= submarineAdjusted)):
		top = i

print ("how to fit the ghostes: ", end = "")
print (top)
