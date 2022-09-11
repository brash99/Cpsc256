def run_loop(int NUMBER):
	cdef int i,s #note the use of cdef!!
	s = 0
	for i in range(NUMBER*1000000):
		s+=1
	return s
