def run_loop(int loop):
	cdef int i,s
	s = 0
	for i in range(loop):
		s+=1
	return s
