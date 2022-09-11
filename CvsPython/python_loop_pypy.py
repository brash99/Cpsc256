import sys
NUMBER = int(sys.argv[1])*1000000
print("PyPy s: %d" % NUMBER);
s = 0
for i in range(NUMBER):
	s+=1
