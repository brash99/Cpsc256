import sys
import cython_loop

num = int(sys.argv[1]);
s = cython_loop.run_loop(num)
print ("Cython s: %d" % s)
